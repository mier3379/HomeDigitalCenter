#include "MainWindow.h"
#include "DashboardWidget.h"
#include "../core/LauncherManager.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("HomeDigitalCenter");
    resize(1200, 800);

    m_launcher = new HDC::LauncherManager(this);
    m_launcher->loadConfig("config/apps.json");

    auto *dashboard = new DashboardWidget(this);
    setCentralWidget(dashboard);

    connect(dashboard,
            &HDC::DashboardWidget::launchRequested,
            this,
            [this](const QString &appId) {
                if (!m_launcher->launch(appId)) {
                    QMessageBox::warning(
                        this,
                        "Launcher",
                        "应用启动失败: " + appId);
                }
            });
}
