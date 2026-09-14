#pragma once

#include <QString>

class FFmpegService
{
public:
    FFmpegService() = default;

    bool initialize();
    QString version() const;
};
