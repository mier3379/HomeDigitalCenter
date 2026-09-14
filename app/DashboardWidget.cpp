#include "DashboardWidget.h"

#include <QGridLayout>
#include <QPushButton>

namespace HDC {

DashboardWidget::DashboardWidget(QWidget *parent)
    : QWidget(parent)
{
    auto *layout = new QGridLayout(this);

    const QList<QPair<QString, QString>> modules = {
        {"影视中心", "video"},
        {"音乐中心", "music"},
        {"阅读中心", "book"},
        {"图片中心", "photo"},
        {"文件中心", "file"},
        {"设置", "settings"}
    };

    int index = 0;
    for (const auto &module : modules) {
        auto *button = new QPushButton(module.first, this);
        connect(button, &QPushButton::clicked, this, [this, module]() {
            emit launchRequested(module.second);
        });
        layout->addWidget(button, index / 3, index % 3);
        index++;
    }
}

}
