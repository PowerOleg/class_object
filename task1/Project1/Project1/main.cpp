#include <iostream>

class Calculator
{
private:
	double num1, num2;

public:
	double add(double num1, double num2)
	{
		return num1 + num2;
	}

	double multiply(double num1, double num2)
	{
		return num1 * num2;
	}

	double subtract_1_2(double num1, double num2)
	{
		return num1 - num2;
	}

	double subtract_2_1(double num1, double num2)
	{
		return num2 - num1;
	}

	double divide_1_2(double num1, double num2)
	{
		return num1 / num2;
	}

	double divide_2_1(double num1, double num2)
	{
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{
			return false;
		}
	}
		
	bool hasError(double num1, double num2)
	{
		if (num1 / num2 == INFINITY)
		{
			return true;
		}
		else if (num2 / num1 == INFINITY)
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
		double num2 = 0;
		std::cout << "Введите num2: ";
		std::cin >> num2;
		double sum = calc.add(num1, num2);
		double multiplication = calc.multiply(num1, num2);

		double subtract_1_2 = calc.subtract_1_2(num1, num2);
		double subtract_2_1 = calc.subtract_2_1(num1, num2);

		double divide_1_2 = calc.divide_1_2(num1, num2);
		double divide_2_1 = calc.divide_2_1(num1, num2);

		calc.set_num1(num1);
		calc.set_num2(num2);
		if (calc.hasError(num1, num2))
		{
			std::cout << "Неверный ввод! Введите значение ещё раз!" << std::endl;
			continue;
		}
		std::cout << "num1 + num2 = " << sum << std::endl;
		std::cout << "num1 - num2 = " << subtract_1_2 << std::endl;
		std::cout << "num2 - num1 = " << subtract_2_1 << std::endl;
		std::cout << "num1 * num2 = " << multiplication << std::endl;
		std::cout << "num1 / num2 = " << divide_1_2 << std::endl;
		std::cout << "num2 / num1 = " << divide_2_1 << std::endl;
	} while (true);
	return 0;
}