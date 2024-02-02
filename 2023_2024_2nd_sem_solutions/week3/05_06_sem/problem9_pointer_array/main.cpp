///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Count Elements
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input and
/// counts the number of elements in the array using pointers. Print the count.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

void func(int array[], size_t size) //передаётся только размер ссылки на первый элемент если сайз аррэя не писать
{
    // std::cout << "here" << sizeof(array) / sizeof(int) << '\n'; //там где объявляешь массив - всё работает, сайзоф эррая - всего массива, 
    // в функцию подаётся указатель на 1 эемент

    for (size_t i = 0; i < size; i++)
    {
        std::cout << (*array++) << '\t';
    }
}


int main()
{
    int array[10] {1, 2, 3, 4, 5};

    // std::cout << sizeof(array) / sizeof(int); //каждый элемент массива занимает по байту

    // 2nd way
    func(array, sizeof(array) / sizeof(int));

    return 0;
}
