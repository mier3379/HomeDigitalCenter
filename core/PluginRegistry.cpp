#include "PluginRegistry.h"

PluginRegistry::PluginRegistry(QObject* parent)
    : QObject(parent)
{
}

void PluginRegistry::registerPlugin(PluginInterface* plugin)
{
    if (plugin && !m_plugins.contains(plugin)) {
        m_plugins.append(plugin);
    }
}

QList<PluginInterface*> PluginRegistry::plugins() const
{
    return m_plugins;
}

bool PluginRegistry::initializePlugins()
{
    for (auto* plugin : m_plugins) {
        if (!plugin->initialize()) {
            return false;
        }
    }

    return true;
}
