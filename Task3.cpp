#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int Matrix[3][6] = { 0 };
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			Matrix[i][j] = std::rand() % 101;
			std::cout << Matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	// Ищем максимальный элемент и минимальный элемент массива
	int min_el = Matrix[0][0];
	size_t min_el_row = 0;
	size_t min_el_col = 0;

	int max_el = Matrix[0][0];
	size_t max_el_row = 0;
	size_t max_el_col = 0;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			if (Matrix[i][j] > max_el)
			{
				max_el = Matrix[i][j];
				max_el_row = i;
				max_el_col = j;
			}
			if (Matrix[i][j] < min_el)
			{
				min_el = Matrix[i][j];
				min_el_row = i;
				min_el_col = j;
			}
		}
	}

	std::cout << "Index minimal element: " << min_el_row << " " << min_el_col << std::endl;
	std::cout << "Index maximum element: " << max_el_row << " " << max_el_col << std::endl;

	system("pause");

	return EXIT_SUCCESS;
}