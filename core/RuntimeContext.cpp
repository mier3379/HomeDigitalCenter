#include "RuntimeContext.h"

RuntimeContext& RuntimeContext::instance()
{
    static RuntimeContext context;
    return context;
}

bool RuntimeContext::initialize()
{
    return true;
}
