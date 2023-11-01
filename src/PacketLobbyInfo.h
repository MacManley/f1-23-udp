// File: PacketLobbyInfo.h
#ifndef PACKETLOBBYINFO_H
#define PACKETLOBBYINFO_H

#include "PHeader.h"
#include <inttypes.h>

#pragma pack(push, 1)

struct LobbyInfoData
{
    uint8_t m_aiControlled;
    uint8_t m_teamId;
    uint8_t m_nationality;
    uint8_t m_platform;
    char m_name[48];
    uint8_t m_carNumber;
    uint8_t m_readyStatus;
};


class PacketLobbyInfo : public PHeader
{
public:
    PacketLobbyInfo();
    virtual ~PacketLobbyInfo();
    uint8_t m_numofCars(void); // Number of cars in the final classification
    LobbyInfoData m_lobbyPlayers(int index);
    void push(char *receiveBuffer);

private:
    uint8_t m_numofCars_; // Number of cars in the final classification
    LobbyInfoData m_lobbyPlayers_[22];
};
#pragma pack(pop)

#endif 