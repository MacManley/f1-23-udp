// File: PacketTyreSetData.cpp
#include "PacketTyreSetData.h"
#include <inttypes.h>
#include <string.h>

PacketTyreSetData::PacketTyreSetData()
: PHeader()
{
}

PacketTyreSetData::~PacketTyreSetData()
{
}

void PacketTyreSetData::push(char *receiveBuffer)
{
    memmove(PHeader::pointerToFirstElement(), receiveBuffer, 231);
}

uint8_t PacketTyreSetData::m_carIdx(void)
{
    return m_carIdx_;
}

TyreSetData PacketTyreSetData::m_tyresetData(int index)
{
    if (index >= 0 && index < 20)
        return m_tyresetData_[index];
    else return{0};
}

uint8_t PacketTyreSetData::m_fittedIdx(void)
{
    return m_fittedIdx_;
}