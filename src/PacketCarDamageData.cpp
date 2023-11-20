// File: PacketCarDamageData.cpp
#include "PacketCarDamageData.h"
#include <string.h>

const int CARDAMAGE_BUFFER_SIZE = 953;

PacketCarDamageData::PacketCarDamageData()
: PHeader()
{}

PacketCarDamageData::~PacketCarDamageData()
{}

void PacketCarDamageData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, CARDAMAGE_BUFFER_SIZE);
}

CarDamageData PacketCarDamageData::m_carDamageData(int index)
{
    if (index >= 0 && index < 22)
        return m_carDamageData_[index];
    else return {0};
}