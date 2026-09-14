#pragma once

#include <QString>

class PluginInterface
{
public:
    virtual ~PluginInterface() = default;

    virtual QString name() const = 0;
    virtual bool initialize() = 0;
};

#define HomeDigitalCenterPlugin_iid "com.homedigitalcenter.PluginInterface"
