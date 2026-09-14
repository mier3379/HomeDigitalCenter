#include "ConfigManager.h"

ConfigManager& ConfigManager::instance()
{
    static ConfigManager manager;
    return manager;
}

bool ConfigManager::load()
{
    return true;
}

bool ConfigManager::save()
{
    return true;
}
