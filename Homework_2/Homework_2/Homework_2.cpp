#include <iostream>
#include <locale.h>
struct score {
	int numberScore;
	std::string nameUser;
	double kolMoney;
};


int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите номер счёта: ";
	int num;
	std::cin >> num;
	std::cout << "Введите имя пользователя: ";
	std::string name;
	std::cin >> name;
	std::cout << "Введите баланс: ";
	double scorePerson;
	std::cin >> scorePerson;
	std::cout << "Введите новый баланс: ";
	double newScore;
	std::cin >> newScore;
	
	score person = {num,name,newScore};
	std::cout << "Ваш счёт: " << person.numberScore << ", " << person.nameUser << ", " << person.kolMoney << std::endl;
}