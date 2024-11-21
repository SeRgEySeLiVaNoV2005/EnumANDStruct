#include <iostream>
#include <locale.h>

struct adress {
	std::string city;
	std::string street;
	int numberBuilding;
	int numberFlat;
	int index;
};

int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите ваш город проживания: ";
	std::string cisyPerson;
	std::cin >> cisyPerson;
	std::cout << "Введите вашу улицу: ";
	std::string streetPerson;
	std::cin >> streetPerson;
	std::cout << "Введите номер вашего дома: ";
	int numberBildingPerson;
	std::cin >> numberBildingPerson;
	std::cout << "Введите номер вашей квартиры: ";
	int numberFlatPerson;
	std::cin >> numberFlatPerson;
	std::cout << "Введите ваш почтовый индекс: ";
	int indexPerson;
	std::cin >> indexPerson;
	adress person = { cisyPerson,streetPerson,numberBildingPerson,numberFlatPerson,indexPerson };
	std::cout << "Город: " << person.city << std::endl;
	std::cout << "Улица: " << person.street << std::endl;
	std::cout << "Номер дома: " << person.numberBuilding << std::endl;
	std::cout << "Номер квартиры: " << person.numberFlat << std::endl;
	std::cout << "Почтовый индекс: " << person.index << std::endl;
}