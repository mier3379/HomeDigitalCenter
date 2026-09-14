#include "PluginManager.h"

PluginManager& PluginManager::instance()
{
    static PluginManager manager;
    return manager;
}

void PluginManager::initialize()
{
}

void PluginManager::loadPlugins()
{
}
