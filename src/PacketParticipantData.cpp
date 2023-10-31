// File: PacketParticipantData.cpp
#include "PacketParticipantData.h"
#include <inttypes.h>
#include <string.h>

PacketParticipantData::PacketParticipantData()
: PHeader()
{}

PacketParticipantData::~PacketParticipantData()
{}

void PacketParticipantData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1306);
}

uint8_t PacketParticipantData::m_numActiveCars(void)
{
    return m_numActiveCars_;
}

ParticipantData PacketParticipantData::m_participants(int index)
{
    if (index >= 0 && index < 22)
        return m_participants_[index];
    else return{0};
}