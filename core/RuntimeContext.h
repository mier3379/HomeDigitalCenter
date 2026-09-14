#pragma once

class RuntimeContext
{
public:
    static RuntimeContext& instance();

    bool initialize();
};
