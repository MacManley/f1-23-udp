// File: PacketTyreSetData.h
#ifndef PACKETTYRESETDATA_H
#define PACKETTYRESETDATA_H

#include "PHeader.h"
#include <inttypes.h>

#pragma pack(push, 1)

struct TyreSetData {
    uint8_t m_actualTyreCompound;
    uint8_t m_VisualTyreCompound;
    uint8_t m_wear;
    uint8_t m_available;
    uint8_t m_recommendedSession;
    uint8_t m_lifeSpan;
    uint8_t m_useableLife;
    int16_t m_lapDeltaTime;
    uint8_t m_fitted;
};

class PacketTyreSetData : public PHeader
{
public:
    PacketTyreSetData();
    virtual ~PacketTyreSetData();
    uint8_t m_carIdx(void);
    TyreSetData m_tyresetData(int index);
    uint8_t m_fittedIdx(void);
    void push(char *receiveBuffer);

private:
    uint8_t m_carIdx_; // Index of the car this lap data relates to
    TyreSetData m_tyresetData_[20];
    uint8_t m_fittedIdx_;

};
#pragma pack(pop)

#endif