#pragma once

#include "../../core/PluginInterface.h"

class JellyfinModule : public PluginInterface
{
public:
    QString name() const override;
    bool initialize() override;
};
