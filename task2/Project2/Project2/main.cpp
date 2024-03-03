#include <iostream>
#include <iomanip>

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

	void increment()
	{
		this->count++;
	}

	void decrement()
	{
		this->count--;
	}

	void print_count()
	{
		std::cout << this->count << std::endl;
	}
};

void loop(Counter* counter)
{
	char input3 = '0';
	std::cout << "������� �������('+', '-', '=' ��� 'x'(eng)): " << std::endl;
	std::cin >> input3;
	while (input3 != 'x')
	{
		if (input3 != '�')
		{
			std::cout << "������� �������('+', '-', '=' ��� 'x'(eng)): " << std::endl;
		}
		std::cin >> input3;
		switch (input3)
		{
		case '+':
			counter->increment();
			break;
		case '-':
			counter->decrement();
			break;
		case '=':
			counter->print_count();
			break;
		default:
			break;
		}
	};
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: " << std::endl;
	char input1[7]{"���"};
	char yes[5]{"��"};
	std::cin >> std::setw(3) >> input1;
	Counter* counter = nullptr;
	if (!strcmp(input1, yes))
	{
		std::cout << "������� ��������� �������� ��������: " << std::endl;
		int input2 = 0;
		std::cin >> input2;
		counter = new Counter(input2);
	}
	else
	{
		counter = new Counter;
	}
	loop(counter);
	delete counter;
	std::cout << "Bye";
	return 0;
}