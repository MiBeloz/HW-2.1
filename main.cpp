#include <iostream>

enum class months { January = 1, February, March, April, May, June, July, August, September, October, November, December, };

std::string getMonth(const months& month) {
	switch (month) {
	case months::January:
		return "Январь";
	case months::February:
		return "Февраль";
	case months::March:
		return "Март";
	case months::April:
		return "Апрель";
	case months::May:
		return "Май";
	case months::June:
		return "Июнь";
	case months::July:
		return "Июль";
	case months::August:
		return "Август";
	case months::September:
		return "Сентябрь";
	case months::October:
		return "Октябрь";
	case months::November:
		return "Ноябрь";
	case months::December:
		return "Декабрь";
	default:
		return "";
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	int num{};
	months month{};

	while (true) {
		std::cout << "Введите номер месяца: ";
		std::cin >> num;
		if (num == 0) {
			std::cout << "До свидания!" << std::endl;
			break;
		}
		else if (num > 0 && num < 13) {
			month = static_cast<months>(num);
			std::cout << getMonth(month) << std::endl;
		}
		else {
			std::cout << "Неправильный номер месяца!" << std::endl;
		}
	}

	system("pause > nul");
	return 0;
}