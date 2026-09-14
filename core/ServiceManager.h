#pragma once

class ServiceManager
{
public:
    static ServiceManager& instance();

    void startServices();
};
