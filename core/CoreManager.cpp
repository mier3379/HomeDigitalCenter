#include "CoreManager.h"

CoreManager& CoreManager::instance()
{
    static CoreManager manager;
    return manager;
}

bool CoreManager::initialize()
{
    return true;
}
