// File: PacketLapData.cpp
#include "PacketLapData.h"
#include <string.h>

PacketLapData::PacketLapData()
: PHeader()
{}

PacketLapData::~PacketLapData()
{}

void PacketLapData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1131);
}

uint8_t PacketLapData::m_timeTrialPBCarIdx(void)
{
    return m_timeTrialPBCarIdx_;
}

uint8_t PacketLapData::m_timeTrialRivalCarIdx(void)
{
    return m_timeTrialRivalCarIdx_;
}

LapData PacketLapData::m_lapData(int index)
{
    if (index >= 0 && index < 22)
        return m_lapData_[index];
    else return {0};
}
