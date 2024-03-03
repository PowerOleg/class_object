## Работа с экземплярами класов как указателями. class, object==instance
    Counter* counter = nullptr;
if (!strcmp(input1, yes))
{
	std::cout << "Введите начальное значение счётчика: " << std::endl;
	int input2 = 0;
	std::cin >> input2;
	<hr>__counter = new Counter(input2);__<hr>
}
else
{
	<hr>__counter = new Counter;__<hr>
}
<hr>loop(counter);
<hr>__delete counter;__