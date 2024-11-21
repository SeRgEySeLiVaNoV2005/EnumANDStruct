#include <iostream>
#include <locale.h>
enum class month {
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};
int main() {
	setlocale(LC_ALL, "Rus");
	while (true) {
		int numberMonth;
		std::cout << "Введите номер месяца: ";
		std::cin >> numberMonth;
		if (numberMonth == 0) {
			return 0;
		}
		else if(numberMonth > 0 && numberMonth < 13){
			if (numberMonth == static_cast<int>(month::Январь)) { std::cout << "Январь" << std::endl; }
			if (numberMonth == static_cast<int>(month::Февраль)) { std::cout << "Февраль" << std::endl; }
			if (numberMonth == static_cast<int>(month::Март)) { std::cout << "Март" << std::endl; }
			if (numberMonth == static_cast<int>(month::Апрель)) { std::cout << "Апрель" << std::endl; }
			if (numberMonth == static_cast<int>(month::Май)) { std::cout << "Май" << std::endl; }
			if (numberMonth == static_cast<int>(month::Июнь)) { std::cout << "Июнь" << std::endl; }
			if (numberMonth == static_cast<int>(month::Июль)) { std::cout << "Июль" << std::endl; }
			if (numberMonth == static_cast<int>(month::Август)) { std::cout << "Август" << std::endl; }
			if (numberMonth == static_cast<int>(month::Сентябрь)) { std::cout << "Сентябрь" << std::endl; }
			if (numberMonth == static_cast<int>(month::Октябрь)) { std::cout << "Октябрь" << std::endl; }
			if (numberMonth == static_cast<int>(month::Ноябрь)) { std::cout << "Ноябрь" << std::endl; }
			if (numberMonth == static_cast<int>(month::Декабрь)) { std::cout << "Декабрь" << std::endl; }
		}
		else { std::cout << "Введенно неправильное число" << std::endl; }
	}
}

