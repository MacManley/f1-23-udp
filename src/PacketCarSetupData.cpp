// File: PacketCarSetupData.cpp
#include "PacketCarSetupData.h"
#include <string.h>

PacketCarSetupData::PacketCarSetupData()
: PHeader()
{
}

PacketCarSetupData::~PacketCarSetupData()
{
}

void PacketCarSetupData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1107);
}

CarSetupData PacketCarSetupData::m_carSetups(int index)
{
    if (index >= 0 && index < 22)
        return m_carSetups_[index];
    else return {0};
}
