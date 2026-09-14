#pragma once

#include "PluginInterface.h"
#include <vector>

class PluginManager
{
public:
    static PluginManager& instance();

    void scanPlugins();
    bool loadPlugin(const QString& path);

private:
    PluginManager() = default;
};
