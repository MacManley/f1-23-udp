// File: PacketLobbyInfo.cpp
#include "PacketLobbyInfo.h"
#include <inttypes.h>
#include <string.h>

const int LOBBYINFO_BUFFER_SIZE = 1218;

PacketLobbyInfo::PacketLobbyInfo()
: PHeader()
{}

PacketLobbyInfo::~PacketLobbyInfo()
{}

void PacketLobbyInfo::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, LOBBYINFO_BUFFER_SIZE);
}

uint8_t PacketLobbyInfo::m_numofCars(void)
{
    return m_numofCars_;
}

LobbyInfoData PacketLobbyInfo::m_lobbyPlayers(int index)
{
    if (index >= 0 && index < 22)
        return m_lobbyPlayers_[index];
    else return {0};
}