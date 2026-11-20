#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	/*Случайная генерация чисел в онлайн режиме
	а не одни и те же данные массива*/
	int nums[10] = {0};
	for (size_t i = 0; i < 10; i++)
	{
		nums[i] = std::rand() % 101;
	}

	std::cout << "Array: ";
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;

	int min_el = nums[0];
	int max_el = nums[0];

	for (size_t i = 0; i < 10; i++)
	{
		if (nums[i] < min_el)
		{
			min_el = nums[i];
		}
		if (nums[i] > max_el)
		{
			max_el = nums[i];
		}
	}
	
	std::cout << "Minimum element: " << min_el << std::endl;
	std::cout << "Maximum element: " << max_el << std::endl;

	system("pause");

	return EXIT_SUCCESS;
}