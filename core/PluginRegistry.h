#pragma once

#include <QObject>
#include <QList>
#include "PluginInterface.h"

class PluginRegistry : public QObject
{
    Q_OBJECT

public:
    explicit PluginRegistry(QObject* parent = nullptr);

    void registerPlugin(PluginInterface* plugin);
    QList<PluginInterface*> plugins() const;
    bool initializePlugins();

private:
    QList<PluginInterface*> m_plugins;
};
