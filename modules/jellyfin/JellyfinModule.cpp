#include "JellyfinModule.h"

QString JellyfinModule::name() const
{
    return "Jellyfin";
}

bool JellyfinModule::initialize()
{
    return true;
}
