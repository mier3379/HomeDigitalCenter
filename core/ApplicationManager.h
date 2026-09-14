#pragma once

#include <QObject>
#include <QString>

namespace HDC {

class ApplicationManager : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationManager(QObject *parent = nullptr);

    bool initialize();
    void shutdown();

    QString version() const;

private:
    QString m_version;
};

}
