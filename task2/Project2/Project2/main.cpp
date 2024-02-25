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

void loop(Counter counter)
{
	char input3 = '0';
	do
	{
		std::cout << "������� �������('+', '-', '=' ��� 'x'(eng)): " << std::endl;
		std::cin >> input3;
		switch (input3)
		{
		case '+':
			counter.increment();
			break;
		case '-':
			counter.decrement();
			break;
		case '=':
			counter.print_count();
			break;
		default:
			break;
		}
	} while (input3 != 'x');
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: " << std::endl;
	char input1[7]{"���"};
	char yes[5]{"��"};
	std::cin >> std::setw(3) >> input1;
	if (!strcmp(input1, yes))
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
	std::cout << "Bye";
	return 0;
}