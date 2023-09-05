#include <iostream>
#include <string>



class Counter
{
private:
	int num;

public:
	Counter() {
		num = 0;
	}

	Counter(int num) {
		this->num = num;
	}

	void changeNum(std::string action) {
		action == "+" ? num = ++num : num = --num;
	}

	int get_num() {
		return num;
	}
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	std::string startAnswer;
	int num;
	std::string action;
	Counter count;

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
	std::cin >> startAnswer;

	if (startAnswer == "yes" || startAnswer == "Yes" || startAnswer == "YES") {

		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> num;
		count = Counter(num);

	}
	else if (startAnswer == "no") {
		count = Counter();

	}
	else {
		std::cout << "�������� ����. ���������� �����." << '\n';
	}

	while (true) {

		std::cout << "������� ������� '+', '-', '=' ��� 'x': ";

		std::cin >> action;

		if (action == "+" || action == "-") {
			count.changeNum(action);


		}
		else if (action == "=") {
			std::cout << count.get_num() << '\n';

		}
		else if (action == "x" || action == "X" || action == "�" || action == "�") {
			std::cout << "�� ��������!" << '\n';
			break;

		}
		else {
			std::cout << "�������� ����. ���������� �����." << '\n';
		}
	}

	return 0;
}