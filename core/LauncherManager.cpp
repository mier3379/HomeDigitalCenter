#include "LauncherManager.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QProcess>

namespace HDC {

LauncherManager::LauncherManager(QObject *parent)
    : QObject(parent)
{
}

bool LauncherManager::loadConfig(const QString &file)
{
    QFile config(file);
    if (!config.open(QIODevice::ReadOnly))
        return false;

    const auto doc = QJsonDocument::fromJson(config.readAll());
    const auto apps = doc.object().value("apps").toArray();

    m_apps.clear();
    for (const auto &item : apps) {
        const auto obj = item.toObject();

        AppInfo info;
        info.id = obj.value("id").toString();
        info.name = obj.value("name").toString();
        info.path = obj.value("path").toString();

        m_apps.append(info);
    }

    return true;
}

bool LauncherManager::launchApp(const QString &id)
{
    for (const auto &app : m_apps) {
        if (app.id == id)
            return QProcess::startDetached(app.path);
    }

    return false;
}

}
