#pragma once

class CoreManager
{
public:
    static CoreManager& instance();

    bool initialize();

private:
    CoreManager() = default;
};
