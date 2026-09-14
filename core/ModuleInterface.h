#pragma once

#include <QString>

namespace HDC {

class ModuleInterface
{
public:
    virtual ~ModuleInterface() = default;

    virtual QString id() const = 0;
    virtual QString name() const = 0;
    virtual bool initialize() = 0;
    virtual void shutdown() = 0;
};

}

#define HDC_MODULE_INTERFACE_IID "com.homedigitalcenter.ModuleInterface"
