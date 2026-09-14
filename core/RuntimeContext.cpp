#include "RuntimeContext.h"

RuntimeContext::RuntimeContext()
{
}

RuntimeContext& RuntimeContext::instance()
{
    static RuntimeContext context;
    return context;
}

bool RuntimeContext::initialize()
{
    return m_pluginRegistry.initializePlugins();
}

PluginRegistry& RuntimeContext::plugins()
{
    return m_pluginRegistry;
}
