#include <iostream>
#include <utility> // для std::swap

int main()
{
    const size_t SIZE = 10;
    int nums[SIZE] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

    // Вывод массива до сортировки
    std::cout << "Array before sort: ";
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    // Сортировка пузырьком в обратную сторону (справа налево)
    for (size_t i = 0; i < SIZE - 1; i++)
    {
        // Внутренний цикл идет с последнего элемента до еще не отсортированной границы i
        for (size_t j = SIZE - 1; j > i; j--)
        {
            // Если правый элемент меньше левого, меняем их местами
            if (nums[j] < nums[j - 1])
            {
                std::swap(nums[j], nums[j - 1]);
            }
        }
    }

    // Вывод массива после сортировки
    std::cout << "Array after sort: ";
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    system("pause");

    return 0;
}