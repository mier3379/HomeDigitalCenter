#pragma once
#include "../../core/PluginInterface.h"

class ReadestModule : public PluginInterface
{
public:
    QString name() const override;
    bool initialize() override;
};
