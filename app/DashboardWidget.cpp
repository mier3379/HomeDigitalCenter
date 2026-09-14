#include "DashboardWidget.h"

#include <QGridLayout>
#include <QPushButton>

namespace HDC {

DashboardWidget::DashboardWidget(QWidget *parent)
    : QWidget(parent)
{
    auto *layout = new QGridLayout(this);

    const QStringList modules = {
        "影视中心",
        "音乐中心",
        "阅读中心",
        "图片中心",
        "文件中心",
        "设置"
    };

    int index = 0;
    for (const auto &name : modules) {
        auto *button = new QPushButton(name, this);
        layout->addWidget(button, index / 3, index % 3);
        index++;
    }
}

}
