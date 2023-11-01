// File: PacketFinalClassificationData.cpp
#include "PacketFinalClassificationData.h"
#include <inttypes.h>
#include <string.h>

PacketFinalClassificationData::PacketFinalClassificationData()
: PHeader()
{}

PacketFinalClassificationData::~PacketFinalClassificationData()
{}

void PacketFinalClassificationData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 1020);
}

uint8_t PacketFinalClassificationData::m_numCars(void)
{
    return m_numCars_;
}

FinalClassificationData PacketFinalClassificationData::m_classificationData(int index)
{
    if (index >= 0 && index < 22)
        return m_classificationData_[index];
    else return {0};
}