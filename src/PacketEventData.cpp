// File: PacketEventData.cpp
#include "PacketEventData.h"
#include <string.h>

PacketEventData::PacketEventData()
: PHeader()
{}

PacketEventData::~PacketEventData()
{}

void PacketEventData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 45);
}

uint8_t* PacketEventData::m_eventStringCode(void)
{

    return m_eventStringCode_;
}

EventDataDetails PacketEventData::m_eventDetails(void)
{
    return m_eventDetails_;
}