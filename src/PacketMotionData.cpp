// File: PacketMotionData.cpp
#include "PacketMotionData.h"
#include <string.h>

PacketMotionData::PacketMotionData()
: PHeader()
{}

PacketMotionData::~PacketMotionData()
{}

void PacketMotionData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1349);
}

CarMotionData PacketMotionData::m_carMotionData(int index)
{
    if (index < 22 && index >= 0)
        return m_carMotionData_[index];
    else return {-1};
}