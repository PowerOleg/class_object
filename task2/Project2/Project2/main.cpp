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



};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	Counter counter(12);

	return 0;
}