#include <iostream>

enum class months { January = 1, February, March, April, May, June, July, August, September, October, November, December, };

std::string getMonth(const months& month) {
	switch (month) {
	case months::January:
		return "������";
	case months::February:
		return "�������";
	case months::March:
		return "����";
	case months::April:
		return "������";
	case months::May:
		return "���";
	case months::June:
		return "����";
	case months::July:
		return "����";
	case months::August:
		return "������";
	case months::September:
		return "��������";
	case months::October:
		return "�������";
	case months::November:
		return "������";
	case months::December:
		return "�������";
	default:
		return "";
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	int num{};
	months month{};

	while (true) {
		std::cout << "������� ����� ������: ";
		std::cin >> num;
		if (num == 0) {
			std::cout << "�� ��������!" << std::endl;
			break;
		}
		else if (num > 0 && num < 13) {
			month = static_cast<months>(num);
			std::cout << getMonth(month) << std::endl;
		}
		else {
			std::cout << "������������ ����� ������!" << std::endl;
		}
	}

	system("pause > nul");
	return 0;
}