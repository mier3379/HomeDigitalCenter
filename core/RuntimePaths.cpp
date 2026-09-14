#include "RuntimePaths.h"

#include <QCoreApplication>
#include <QDir>

namespace HDC {

QString RuntimePaths::applicationDir()
{
    return QCoreApplication::applicationDirPath();
}

QString RuntimePaths::configDir()
{
    return QDir(applicationDir()).filePath("config");
}

QString RuntimePaths::appsDir()
{
    return QDir(applicationDir()).filePath("apps");
}

QString RuntimePaths::resolve(const QString &path)
{
    if (QDir::isAbsolutePath(path))
        return path;

    return QDir(applicationDir()).filePath(path);
}

}
