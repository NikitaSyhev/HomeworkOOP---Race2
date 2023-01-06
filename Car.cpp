#include "Car.h"
#include <string>
#include "Track.h"

Car::Car() : _averageSpeed(180), _raceDistance(50), _raceType("Ring Race") {}

Car::Car(int averageSpeed, int raceDistance, const std::string& roadType) :
	_averageSpeed(averageSpeed), _raceDistance(raceDistance), _raceType(roadType) {}


int Car::getAverageSpeed()
{
	return _averageSpeed;
}

void Car::setAverageSpeed(int averageSpeed)
{
	_averageSpeed = averageSpeed;
}

int Car::getRaceDistance() const
{
	return _raceDistance;
}

void Car::setRaceDistance(int raceDistance)
{
	_raceDistance = raceDistance;
}

std::string& Car::getRoadType()
{
	return _raceType;
}

void Car::setRoadType(std::string raceType)
{
	_raceType = raceType;
}

double Car::RaceTime(double averageSpeed, double raceDistance)
{
	return raceDistance / averageSpeed;
}

Motorcycle::Motorcycle() : _averageSpeedM(190), _raceDistanceM(30), _raceTypeM("RingBike") {}

Motorcycle::Motorcycle(int averageSpeedM, int raceDistanceM, const std::string& raceTypeM) :
	_averageSpeedM(averageSpeedM), _raceDistanceM(raceDistanceM), _raceTypeM(raceTypeM) {}

int Motorcycle::getAverageSpeedM() const
{
	return _averageSpeedM;
}

void Motorcycle::setAverageSpeedM(int averageSpeedM)
{
	_averageSpeedM = averageSpeedM;
}

int Motorcycle::getRaceDistanceM() const
{
	return _raceDistanceM;
}

void Motorcycle::setRaceDistanceM(int raceDistanceM)
{
	_raceDistanceM = raceDistanceM;
}

std::string& Motorcycle::getRaceTypeM()
{
	return _raceTypeM;
}

void Motorcycle::setRaceTypeM(std::string raceTypeM)
{
	_raceTypeM = raceTypeM;
}

double Motorcycle::RaceTimeM(double averageSpeedM, double raceDistanceM)
{
	return raceDistanceM / averageSpeedM;
}
