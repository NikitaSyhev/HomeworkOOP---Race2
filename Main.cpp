//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "Car.h"
#include <string>
#include "Track.h"

bool race(std::string track, Car Auto, Motorcycle Moto) {
	int distance = 50;

	if (track == "Auto") {
		double AutoSpeed = 1.1 * Auto.getAverageSpeed();
		double MotorSpeed = 0.95 * Moto.getAverageSpeedM();

		if (distance / AutoSpeed < distance / MotorSpeed) {

			return 0;
		}
		else

			return 1;

	}

	if (track == "Moto") {
		double AutoSpeed = 0.95 * Auto.getAverageSpeed();
		double MotorSpeed = 1.2 * Moto.getAverageSpeedM();

		if (distance / AutoSpeed < distance / MotorSpeed) {

			return 0;
		}
		else

			return 1;
	}
}








int main() {
	setlocale(LC_ALL, "Russian");

	std::string AutoTrack, MotorTrack;
	AutoTrack = "Auto";
	MotorTrack = "Moto";




	Car racer1(180, 50, "Ring");


	std::cout << "Время, затраченное гонщиком номер 1 на автомобиле на стандартной трассе 100 км.: " << racer1.RaceTime(180, 100) << "часа.\n";


	Motorcycle racer2(190, 50, "Ring");

	std::cout << "Время, затраченное гонщиком номер 2 на мотоцикле на стандартной трассе 100 км.: " <<
		racer2.RaceTimeM(190, 100) << "часа.\n";


	std::cout << "Гонка номер 1. Проходит на автомобильной трассе: (где 0 - автомобиль, 1 - мотоцикл): \n";
	std::cout << "Победитель: " << race("Auto", racer1, racer2) << std::endl;

	std::cout << "Гонка номер 2. Проходит на мотоциклетной трассе: (где 0 - автомобиль, 1 - мотоцикл): \n";
	std::cout << "Победитель: " << race("Moto", racer1, racer2) << std::endl;



	std::cout << "======================================" << std::endl;

	std::cout << "Задание 2 с методом Race()" << std::endl;
	Car racer3(190, 50, "Ring");

	std::cout << "Параметры авто для второго этапа: Средняя скорость - " << racer3.getAverageSpeed() <<
		" .Тип авто " << racer3.getRoadType() << std::endl;

	Motorcycle racer4(190, 50, "Ring");
	std::cout << "Параметры мотоцикла для второго этапа: Средняя скорость - " << racer4.getAverageSpeedM() <<
		" .Тип мото " << racer4.getRaceTypeM() << std::endl;


	Track Track1("Bad", "Auto");
	std::cout << "Трасса номер 1: Погодные условия - " << Track1.getWeather() << " Тип трассы: - " << Track1.getTrack()
		<< std::endl;


	Track Track2("Good", "Moto");
	std::cout << "Трасса номер 2: Погодные условия - " << Track2.getWeather() << " Тип трассы: - " << Track2.getTrack()
		<< std::endl;

	Track Track3("Bad", "Moto");
	std::cout << "Трасса номер 3: Погодные условия - " << Track3.getWeather() << " Тип трассы: - " << Track3.getTrack()
		<< std::endl;

	std::cout << "Гонка 1: Используеммая трасса - Трасса номер 1. Где 0 - автомобиль, 1 - мотоцикл:" << std::endl;
	std::cout << "Победитель - " << Track1.race(Track1, racer3, racer4) << std::endl;

	std::cout << "Гонка 2: Используеммая трасса - Трасса номер 2. Где 0 - автомобиль, 1 - мотоцикл:" << std::endl;
	std::cout << "Победитель - " << Track2.race(Track2, racer3, racer4) << std::endl;

	std::cout << "Гонка 3: Используеммая трасса - Трасса номер 3. Где 0 - автомобиль, 1 - мотоцикл:" << std::endl;
	std::cout << "Победитель - " << Track3.race(Track3, racer3, racer4) << std::endl;




	return 0;
}
