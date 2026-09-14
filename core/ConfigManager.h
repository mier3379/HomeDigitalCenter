#pragma once

#include <QString>

class ConfigManager
{
public:
    static ConfigManager& instance();

    bool load();
    bool save();

    QString value(const QString& key) const;
    void setValue(const QString& key, const QString& value);

private:
    ConfigManager() = default;
};
