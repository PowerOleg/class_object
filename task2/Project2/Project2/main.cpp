#include <iostream>

class Counter
{
private:
	int count;
public:
	Counter()
	{
		this->count = 1;
	}

	Counter(int initial_count)
	{
		this->count = initial_count;
	}

	bool increment()
	{
		this->count++;
	}

	bool decrement()
	{
		this->count--;
	}

	bool print_count()
	{
		std::cout << this->count << std::endl;
	}
};

void loop(Counter counter)
{
	char input3 = '0';
	do
	{
		std::cout << "������� �������('+', '-', '=' ��� 'x'): " << std::endl;
		std::cin >> input3;
		std::cout << counter.print_count();
	} while (input3 != 'x');
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: " << std::endl;
	char input1[7]{"���"};
	std::cin >> /*std::setw(4) >>*/ input1;
	if (strcmp(input1, "��"))
	{
		std::cout << "������� ��������� �������� ��������: " << std::endl;
		int input2 = 0;
		std::cin >> input2;
		Counter counter1(input2);
		loop(counter1);
	}
	else
	{
		Counter counter2;
		loop(counter2);
	}

	return 0;
}