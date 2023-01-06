//���� ������ ������ � ������� ������������� �������
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


	std::cout << "�����, ����������� �������� ����� 1 �� ���������� �� ����������� ������ 100 ��.: " << racer1.RaceTime(180, 100) << "����.\n";


	Motorcycle racer2(190, 50, "Ring");

	std::cout << "�����, ����������� �������� ����� 2 �� ��������� �� ����������� ������ 100 ��.: " <<
		racer2.RaceTimeM(190, 100) << "����.\n";


	std::cout << "����� ����� 1. �������� �� ������������� ������: (��� 0 - ����������, 1 - ��������): \n";
	std::cout << "����������: " << race("Auto", racer1, racer2) << std::endl;

	std::cout << "����� ����� 2. �������� �� ������������� ������: (��� 0 - ����������, 1 - ��������): \n";
	std::cout << "����������: " << race("Moto", racer1, racer2) << std::endl;



	std::cout << "======================================" << std::endl;

	std::cout << "������� 2 � ������� Race()" << std::endl;
	Car racer3(190, 50, "Ring");

	std::cout << "��������� ���� ��� ������� �����: ������� �������� - " << racer3.getAverageSpeed() <<
		" .��� ���� " << racer3.getRoadType() << std::endl;

	Motorcycle racer4(190, 50, "Ring");
	std::cout << "��������� ��������� ��� ������� �����: ������� �������� - " << racer4.getAverageSpeedM() <<
		" .��� ���� " << racer4.getRaceTypeM() << std::endl;


	Track Track1("Bad", "Auto");
	std::cout << "������ ����� 1: �������� ������� - " << Track1.getWeather() << " ��� ������: - " << Track1.getTrack()
		<< std::endl;


	Track Track2("Good", "Moto");
	std::cout << "������ ����� 2: �������� ������� - " << Track2.getWeather() << " ��� ������: - " << Track2.getTrack()
		<< std::endl;

	Track Track3("Bad", "Moto");
	std::cout << "������ ����� 3: �������� ������� - " << Track3.getWeather() << " ��� ������: - " << Track3.getTrack()
		<< std::endl;

	std::cout << "����� 1: ������������� ������ - ������ ����� 1. ��� 0 - ����������, 1 - ��������:" << std::endl;
	std::cout << "���������� - " << Track1.race(Track1, racer3, racer4) << std::endl;

	std::cout << "����� 2: ������������� ������ - ������ ����� 2. ��� 0 - ����������, 1 - ��������:" << std::endl;
	std::cout << "���������� - " << Track2.race(Track2, racer3, racer4) << std::endl;

	std::cout << "����� 3: ������������� ������ - ������ ����� 3. ��� 0 - ����������, 1 - ��������:" << std::endl;
	std::cout << "���������� - " << Track3.race(Track3, racer3, racer4) << std::endl;




	return 0;
}
