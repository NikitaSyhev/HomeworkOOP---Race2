#pragma once
#include <string>
class Car;
class Motorcycle;
class Track
{

public:
	Track(std::string weather, std::string track);

	std::string& getWeather();
	void setWeather(std::string& weather);


	std::string& getTrack();
	void setTrack(std::string& track);

	bool race(Track& track, Car& Car, Motorcycle& Motor);




private:
	std::string _weather;
	std::string _track;



};
