#include <iostream>

class Calculator
{
private:
	double num1, num2;

public:
	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num1 / num2;
	}

	double divide_2_1()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2)
	{
		this->num2 = num2;
		return true;
	}
		
	bool hasError()
	{
		if (num1 / num2 < std::numeric_limits<double>::epsilon())
		{
			return true;
		}
		else if (num2 / num1 < std::numeric_limits<double>::epsilon())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	Calculator calc;

	do
	{
		double num1 = 0;
		std::cout << "Введите num1: ";
		std::cin >> num1;
		calc.set_num1(num1);
		double num2 = 0;
		std::cout << "Введите num2: ";
		std::cin >> num2;
		calc.set_num2(num2);

		std::cout << num1 << " " << num2 << std::endl;
		double sum = calc.add();
		double multiplication = calc.multiply();

		double subtract_1_2 = calc.subtract_1_2();
		double subtract_2_1 = calc.subtract_2_1();

		double divide_1_2 = calc.divide_1_2();
		double divide_2_1 = calc.divide_2_1();

		calc.set_num1(num1);
		calc.set_num2(num2);
		if (calc.hasError())
		{
			std::cout << "Неверный ввод! Введите значение ещё раз!" << std::endl;
			continue;
		}
		std::cout << "num1 + num2 = " << sum << std::endl;
		std::cout << "num1 - num2 = " << subtract_1_2 << std::endl;
		std::cout << "num2 - num1 = " << subtract_2_1 << std::endl;
		std::cout << "num1 * num2 = " << multiplication << std::endl;
		if (num1 == 0 && num2 == 0)
		{
			std::cout << "num1 / num2 = " << "Результат не определен" << std::endl;
			std::cout << "num2 / num1 = " << "Результат не определен" << std::endl;
		}
		else
		{
			std::cout << "num1 / num2 = " << divide_1_2 << std::endl;
			std::cout << "num2 / num1 = " << divide_2_1 << std::endl;
		}
		
	} while (true);
	return 0;
}