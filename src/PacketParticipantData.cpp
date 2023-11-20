// File: PacketParticipantData.cpp
#include "PacketParticipantData.h"
#include <inttypes.h>
#include <string.h>

const int PARTICIPANT_BUFFER_SIZE = 1306;

PacketParticipantData::PacketParticipantData()
: PHeader()
{}

PacketParticipantData::~PacketParticipantData()
{}

void PacketParticipantData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, PARTICIPANT_BUFFER_SIZE);
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