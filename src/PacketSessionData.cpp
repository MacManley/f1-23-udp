// File: PacketSessionData.cpp
#include "PacketSessionData.h"
#include <inttypes.h>
#include <cstring>

const int SESSION_BUFFER_SIZE = 644;

PacketSessionData::PacketSessionData()
: PHeader()
{}

PacketSessionData::~PacketSessionData(void)
{}

void PacketSessionData::push(char *receiveBuffer)
{
    std::memcpy(PHeader::pointerToFirstElement(), receiveBuffer, SESSION_BUFFER_SIZE);
}

uint8_t PacketSessionData::m_DRSAssist(void)
{
    return m_DRSAssist_;
}

uint8_t PacketSessionData::m_ERSAssist(void)
{
    return m_ERSAssist_;
}

uint8_t PacketSessionData::m_aiDifficulty(void)
{
    return m_aiDifficulty_;
}

int8_t PacketSessionData::m_airTemperature(void)
{
    return m_airTemperature_;
}

uint8_t PacketSessionData::m_brakingAssist(void)
{
    return m_brakingAssist_;
}

uint8_t PacketSessionData::m_dynamicRacingLineType(void)
{
    return m_dynamicRacingLineType_;
}

uint8_t PacketSessionData::m_dynamicRacingLine(void)
{
    return m_dynamicRacingLine_;
}

uint8_t PacketSessionData::m_forecastAccuracy(void)
{
    return m_forecastAccuracy_;
}

uint8_t PacketSessionData::m_formula(void)
{
    return m_formula_;
}

uint8_t PacketSessionData::m_gamePaused(void)
{
    return m_gamePaused_;
}

uint8_t PacketSessionData::m_gearboxAssist(void)
{
    return m_gearboxAssist_;
}

uint8_t PacketSessionData::m_isSpectating(void)
{
    return m_isSpectating_;
}

MarshalZone PacketSessionData::m_marshalZones(int index)
{
    return m_marshalZones_[index];
}

uint8_t PacketSessionData::m_networkGame(void)
{
    return m_networkGame_;
}

uint8_t PacketSessionData::m_numMarshalZones(void)
{
    return m_numMarshalZones_;
}

uint8_t PacketSessionData::m_numWeatherForecastSamples(void)
{
    return m_numWeatherForecastSamples_;
}

uint8_t PacketSessionData::m_pitAssist(void)
{
    return m_pitAssist_;
}

uint8_t PacketSessionData::m_pitReleaseAssist(void)
{
    return m_pitReleaseAssist_;
}

uint8_t PacketSessionData::m_pitSpeedLimit(void)
{
    return m_pitSpeedLimit_;
}

uint8_t PacketSessionData::m_pitStopRejoinPosition(void)
{
    return m_pitStopRejoinPosition_;
}

uint8_t PacketSessionData::m_pitStopWindowIdealLap(void)
{
    return m_pitStopWindowIdealLap_;
}

uint8_t PacketSessionData::m_pitStopWindowLatestLap(void)
{
    return m_pitStopWindowLatestLap_;
}

uint8_t PacketSessionData::m_safetyCarStatus(void)
{
    return m_safetyCarStatus_;
}

uint32_t PacketSessionData::m_seasonLinkIdentifier(void)
{
    return m_seasonLinkIdentifier_;
}

uint16_t PacketSessionData::m_sessionDuration(void)
{
    return m_sessionDuration_;
}

uint32_t PacketSessionData::m_sessionLinkIdentifier(void)
{
    return m_sessionLinkIdentifier_;
}

uint16_t PacketSessionData::m_sessionTimeLeft(void)
{
    return m_sessionTimeLeft_;
}

uint8_t PacketSessionData::m_sessionType(void)
{
    return m_sessionType_;
}

uint8_t PacketSessionData::m_sliProNativeSupport(void)
{
    return m_sliProNativeSupport_;
}

uint8_t PacketSessionData::m_spectatorCarIndex(void)
{
    return m_spectatorCarIndex_;
}

uint8_t PacketSessionData::m_steeringAssist(void)
{
    return m_steeringAssist_;
}

uint8_t PacketSessionData::m_totalLaps(void)
{
    return m_totalLaps_;
}

int8_t PacketSessionData::m_trackId(void)
{
    return m_trackId_;
}

uint16_t PacketSessionData::m_trackLength(void)
{
    return m_trackLength_;
}

int8_t PacketSessionData::m_trackTemperature(void)
{
    return m_trackTemperature_;
}

uint8_t PacketSessionData::m_gameMode(void)
{
    return m_gameMode_;
}

uint8_t PacketSessionData::m_ruleSet(void)
{
    return m_ruleSet_;
}

uint32_t PacketSessionData::m_timeOfDay(void)
{
    return m_timeOfDay_;
}

uint8_t PacketSessionData::m_sessionLength(void)
{
    return m_sessionLength_;
}

uint8_t PacketSessionData::m_speedUnitsLeadPlayer(void)
{
    return m_speedUnitsLeadPlayer_;
}

uint8_t PacketSessionData::m_temperatureUnitsLeadPlayer(void)
{
    return m_temperatureUnitsLeadPlayer_;
}

uint8_t PacketSessionData::m_speedUnitsSecondaryPlayer(void)
{
    return m_speedUnitsSecondaryPlayer_;
}

uint8_t PacketSessionData::m_temperatureUnitsSecondaryPlayer(void)
{
    return m_temperatureUnitsSecondaryPlayer_;
}

uint8_t PacketSessionData::m_numSafetyCarPeriods(void)
{
    return m_numSafetyCarPeriods_;
}

uint8_t PacketSessionData::m_numVirtualSafetyCarPeriods(void)
{
    return m_numVirtualSafetyCarPeriods_;
}

uint8_t PacketSessionData::m_numRedFlagPeriods(void)
{
    return m_numRedFlagPeriods_;
}

WeatherForecastSample PacketSessionData::m_weatherForecastSamples(int index)
{
    return m_weatherForecastSamples_[index];
}

uint8_t PacketSessionData::m_weather(void)
{
    return m_weather_;
}

uint32_t PacketSessionData::m_weekendLinkIdentifier(void)
{
    return m_weekendLinkIdentifier_;
}