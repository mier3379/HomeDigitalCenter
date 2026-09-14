#pragma once

class Application
{
public:
    static Application& instance();

    bool initialize();
    bool registerModules();

private:
    Application() = default;
};
