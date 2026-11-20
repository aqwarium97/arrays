#include <iostream>
#include <cstdlib>

int main()
{
	int nums[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		nums[i] = std::rand() % 101;
	}
	
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << nums[i];
		if (i < 9)
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
	system("pause");


	return EXIT_SUCCESS;
}