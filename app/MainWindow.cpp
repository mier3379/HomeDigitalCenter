#include "MainWindow.h"
#include "DashboardWidget.h"
#include "../core/LauncherManager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("HomeDigitalCenter");
    resize(1200, 800);

    auto *dashboard = new DashboardWidget(this);
    setCentralWidget(dashboard);
}
