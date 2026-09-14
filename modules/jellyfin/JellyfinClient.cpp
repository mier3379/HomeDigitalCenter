#include "JellyfinClient.h"

JellyfinClient::JellyfinClient()
{
}

bool JellyfinClient::connect(const QString& server)
{
    m_server = server;
    return true;
}
