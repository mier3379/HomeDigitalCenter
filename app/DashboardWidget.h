#pragma once

#include <QWidget>

namespace HDC {

class DashboardWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DashboardWidget(QWidget *parent = nullptr);

signals:
    void launchRequested(const QString &appId);
};

}
