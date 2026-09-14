#include "APlayerModule.h"

QString APlayerModule::name() const
{
    return "APlayer";
}

bool APlayerModule::initialize()
{
    return true;
}
