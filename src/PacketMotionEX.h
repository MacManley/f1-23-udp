// File: PacketMotionEXData.h
#ifndef PACKETMOTIONEX_H
#define PACKETMOTIONEX_H

#include "PHeader.h"

#pragma pack(push, 1)

struct MotionEXData {
    float m_suspensionPosition[4]; // Note: All wheel arrays have the following order:
    float m_suspensionVelocity[4]; // RL, RR, FL, FR
    float m_suspensionAcceleration[4]; // RL, RR, FL, FR
    float m_wheelSpeed[4]; // Speed of each wheel
    float m_wheelSlipRation[4]; // Slip ratio for each wheel
    float m_wheelSlipAngle[4];
    float m_wheelLatForce[4];
    float m_wheelLongForce[4];
    float m_heightOfCOGAboveGround;
    float m_localVelocityX; // Velocity in local space
    float m_localVelocityY; // Velocity in local space
    float m_localVelocityZ; // Velocity in local space
    float m_angularVelocityX; // Angular velocity x-component
    float m_angularVelocityY; // Angular velocity y-component
    float m_angularVelocityZ; // Angular velocity z-component
    float m_angularAccelerationX; // Angular velocity x-component
    float m_angularAccelerationY; // Angular velocity y-component
    float m_angularAccelerationZ; // Angular velocity z-component
    float m_frontWheelsAngle; // Current front wheels angle in radians
    float m_wheelVertForce[4]; // Vertical forces for each wheel
};

class PacketMotionEXData : public PHeader
{
public:
    PacketMotionEXData();
    virtual ~PacketMotionEXData();
    MotionEXData m_carMotionEXData();
    void push(char *receiveBuffer);

private:
    MotionEXData m_carMotionEXData_; //Players car only
};
#pragma pack(pop)

#endif