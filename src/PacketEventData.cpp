// File: PacketEventData.cpp
#include "PacketEventData.h"
#include <string.h>

const int EVENT_BUFFER_SIZE = 45;

PacketEventData::PacketEventData()
: PHeader()
{}

PacketEventData::~PacketEventData()
{}

void PacketEventData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, EVENT_BUFFER_SIZE);
}

uint8_t* PacketEventData::m_eventStringCode(void)
{

    return m_eventStringCode_;
}

EventDataDetails PacketEventData::m_eventDetails(void)
{
    return m_eventDetails_;
}