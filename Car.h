#pragma once
#include <string>
class Car
{
public:
	Car();
	Car(int averageSpeed, int raceDistance, const std::string& raceType);

	int getAverageSpeed();
	void setAverageSpeed(int averageSpeed);

	int getRaceDistance() const;
	void setRaceDistance(int raceDistance);

	std::string& getRoadType();
	void setRoadType(std::string raceType);

	double RaceTime(double averageSpeed, double raceDistance);


private:

	int _averageSpeed;
	int _raceDistance;
	std::string _raceType;

};

class Motorcycle
{
public:
	Motorcycle();
	Motorcycle(int averageSpeedM, int raceDistanceM, const std::string& raceTypeM);

	int getAverageSpeedM() const;
	void setAverageSpeedM(int averageSpeedM);

	int getRaceDistanceM() const;
	void setRaceDistanceM(int raceDistanceM);

	std::string& getRaceTypeM();
	void setRaceTypeM(std::string raceTypeM);

	double RaceTimeM(double averageSpeedM, double raceDistanceM);


private:

	int _averageSpeedM;
	int _raceDistanceM;
	std::string _raceTypeM;

};

