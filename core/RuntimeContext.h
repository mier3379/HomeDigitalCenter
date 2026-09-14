#pragma once

#include "PluginRegistry.h"

class RuntimeContext
{
public:
    static RuntimeContext& instance();

    bool initialize();

    PluginRegistry& plugins();

private:
    RuntimeContext();

    PluginRegistry m_pluginRegistry;
};
