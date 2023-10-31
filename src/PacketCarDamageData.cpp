// File: PacketCarDamageData.cpp
#include "PacketCarDamageData.h"
#include <string.h>

PacketCarDamageData::PacketCarDamageData()
: PHeader()
{}

PacketCarDamageData::~PacketCarDamageData()
{}

void PacketCarDamageData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 953);
}

CarDamageData PacketCarDamageData::m_carDamageData(int index)
{
    if (index >= 0 && index < 22)
        return m_carDamageData_[index];
    else return {0};
}