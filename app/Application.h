#pragma once

class Application
{
public:
    static Application& instance();

    bool initialize();

private:
    Application() = default;
};
