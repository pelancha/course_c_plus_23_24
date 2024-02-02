///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Copy Array
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input,
/// creates a new array, copies the elements from the original array to the new
/// array using pointers, and then prints the new array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int a[5];
    for (size_t i = 0; i < 5; i++)
        std::cin >> a[i];

    
    int b[5];
    int* pointer = b;
    for (size_t i = 0; i < 5; i++)
    {
        *(pointer++) = a[i];
    }

    for (int x:b)
    std::cout << x << '\t';

    return 0;
}
