// File: PacketLobbyInfo.cpp
#include "PacketLobbyInfo.h"
#include <inttypes.h>
#include <string.h>

PacketLobbyInfo::PacketLobbyInfo()
: PHeader()
{}

PacketLobbyInfo::~PacketLobbyInfo()
{}

void PacketLobbyInfo::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1218);
}

uint8_t m_numofCars(void)
{
    return m_numofCars();
}

LobbyInfoData PacketLobbyInfo::m_lobbyPlayers(int index)
{
    if (index >= 0 && index < 22)
        return m_lobbyPlayers_[index];
    else return {0};
}