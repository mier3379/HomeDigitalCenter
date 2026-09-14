#include "Application.h"
#include "../core/RuntimeContext.h"

Application& Application::instance()
{
    static Application app;
    return app;
}

bool Application::initialize()
{
    return RuntimeContext::instance().initialize();
}
