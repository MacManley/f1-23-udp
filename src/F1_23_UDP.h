// File: F1_23_UDP.h
#ifndef F1_23_UDP_H
#define F1_23_UDP_H

#include "PacketSessionHistoryData.h"
#include "PacketMotionData.h"
#include "PacketSessionData.h"
#include "PacketLapData.h"
#include "PacketEventData.h"
#include "PacketParticipantData.h"
#include "PacketCarSetupData.h"
#include "PacketCarTelemetryData.h"
#include "PacketCarStatusData.h"
#include "PacketFinalClassificationData.h"
#include "PacketLobbyInfo.h"
#include "PacketCarDamageData.h"
#include "PacketSessionHistoryData.h"
#include "PacketTyreSetData.h"
#include "PacketMotionEX.h"

class F1_23_Parser
{
public:
    F1_23_Parser();
    virtual ~F1_23_Parser();
    void push(char * recieveBuffer);
    PacketMotionData* packetMotionData(void);
    PacketSessionData* packetSessionData(void);
    LapDataPacket* packetLapData(void);
    PacketEventData* packetEventData(void);
    PacketParticipantData* packetParticipantData(void);
    PacketCarSetupData* packetCarSetupData(void);
    PacketCarTelemetryData* packetCarTelemetryData(void);
    PacketCarStatusData* packetCarStatusData(void);
    PacketFinalClassificationData* packetFinalClassificationData(void);
    PacketLobbyInfo* packetLobbyData(void);
    PacketCarDamageData* packetCarDamageData(void);
    PacketSessionHistoryData* packetSessionHistoryData(void);
    PacketTyreSetData* packetTyreSetData(void);
    PacketMotionEXData* packetMotionEXData(void);

private:
    PacketMotionData* packetMotionData_;
    PacketSessionData* packetSessionData_;
    LapDataPacket* packetLapData_;
    PacketEventData* packetEventData_;
    PacketParticipantData* packetParticipantData_;
    PacketCarSetupData* packetCarSetupData_;
    PacketCarTelemetryData* packetCarTelemetryData_;
    PacketCarStatusData* packetCarStatusData_;
    PacketFinalClassificationData* packetFinalClassificationData_;
    PacketLobbyInfo* packetLobbyData_;
    PacketCarDamageData* packetCarDamageData_;
    PacketSessionHistoryData* packetSessionHistoryData_;
    PacketTyreSetData* packetTyreSetData_;
    PacketMotionEXData* packetMotionEXData_;

};

#endif

