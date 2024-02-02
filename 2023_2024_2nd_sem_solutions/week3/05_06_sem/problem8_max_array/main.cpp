///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Find Maximum Element
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input and
/// finds the maximum element using pointers. Print the maximum element.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int findMax(int* array, size_t size); //подаётся ссылка на первый элемент и размер массива

int main()
{
    int array[5];
    for(size_t i = 0; i < 5; i++){
        std::cin >> array[i];
    }

    std::cout << findMax(a, 5);

    return 0;
}

int findMax(int* array, size_t size)
{
    // int max = *(array++);
    // for (size_t i = 0; i < size; i++)
    // {
    //     if (max < *array) 
    //         max = *(array++); //указатель переводится на след элемент
    // }

    // return max;

    //2way

    int max = *(array);
    for (size_t i = 0; i < size; i++)
    {
        if (max < *array) 
            max = *(array);

        array++;  //указатель переводится на след элемент
    }

    return max;


}
