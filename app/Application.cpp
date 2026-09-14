#include "Application.h"
#include "../core/RuntimeContext.h"

Application& Application::instance()
{
    static Application app;
    return app;
}

bool Application::initialize()
{
    if (!registerModules())
        return false;

    return RuntimeContext::instance().initialize();
}

bool Application::registerModules()
{
    // Module registration entry point.
    // Real module instances will be injected here as modules mature.
    return true;
}
