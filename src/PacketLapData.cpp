// File: PacketLapData.cpp
#include "PacketLapData.h"
#include <string.h>

LapDataPacket::LapDataPacket()
: PHeader()
{}

LapDataPacket::~LapDataPacket()
{}

void LapDataPacket::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1131);
}

uint8_t LapDataPacket::m_timeTrialPBCarIdx(void)
{
    return m_timeTrialPBCarIdx_;
}

uint8_t LapDataPacket::m_timeTrialRivalCarIdx(void)
{
    return m_timeTrialRivalCarIdx_;
}

LapData LapDataPacket::m_lapData(char index)
{
    if (index >= 0 && index < 22)
        return m_lapData_[index];
    else return {0};
}
