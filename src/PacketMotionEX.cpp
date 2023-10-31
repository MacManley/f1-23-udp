// File: PacketMotionEXData.cpp
#include "PacketMotionEX.h"
#include <inttypes.h>
#include <string.h>

PacketMotionEXData::PacketMotionEXData()
: PHeader()
{}

PacketMotionEXData::~PacketMotionEXData()
{}

void PacketMotionEXData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 217);
}

MotionEXData PacketMotionEXData::m_carMotionEXData()
{
        return m_carMotionEXData_;

}