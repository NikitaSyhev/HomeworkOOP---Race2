#include "Track.h"
#include <string>
#include "Car.h"
Track::Track(std::string weather, std::string track) : _weather(weather), _track(track) {}

std::string& Track::getWeather() {
	return _weather;
}

void Track::setWeather(std::string& weather)
{
	_weather = weather;
}

std::string& Track::getTrack()
{
	return _track;
}

void Track::setTrack(std::string& track)
{
	_track = track;
}

bool Track::race(Track& track, Car& Car, Motorcycle& Motor)
{
	double distance = 100.0;
	double timeCar, timeMoto;
	double motorSpeed;
	double carSpeed;
	if (track.getWeather() == "Good")
	{
		motorSpeed = 1.1 * Motor.getAverageSpeedM();
		carSpeed = 1.0 * Car.getAverageSpeed();
		timeCar = distance / carSpeed;
		timeMoto = distance / motorSpeed;
		if (timeCar < timeMoto) return 0;
		else return 1;
	}
	else
		if (track.getWeather() == "Bad") {
			motorSpeed = 0.8 * Motor.getAverageSpeedM();
			carSpeed = 1.0 * Car.getAverageSpeed();
			timeCar = distance / carSpeed;
			timeMoto = distance / motorSpeed;
			if (timeCar < timeMoto) return 0;
			else return 1;
		}








}
