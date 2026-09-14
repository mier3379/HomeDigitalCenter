#pragma once

#include <QObject>
#include <QString>
#include <QList>

namespace HDC {

struct AppInfo
{
    QString id;
    QString name;
    QString path;
};

class LauncherManager : public QObject
{
    Q_OBJECT
public:
    explicit LauncherManager(QObject *parent = nullptr);

    bool loadConfig(const QString &file);
    bool launchApp(const QString &id);

private:
    QList<AppInfo> m_apps;
};

}
