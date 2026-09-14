#pragma once
#include "../../core/PluginInterface.h"

class APlayerModule : public PluginInterface
{
public:
    QString name() const override;
    bool initialize() override;
};
