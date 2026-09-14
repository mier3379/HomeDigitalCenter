#pragma once

#include <QString>

namespace HDC {

class RuntimePaths
{
public:
    static QString applicationDir();
    static QString configDir();
    static QString appsDir();
    static QString resolve(const QString &path);
};

}
