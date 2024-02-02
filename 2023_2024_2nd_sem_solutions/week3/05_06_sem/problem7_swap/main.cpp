///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Swap Variables
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads two integers from the standard input and swaps
/// their values using pointers. Print the swapped values.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int a = 5, b = 10;

    int* pointer_a = &a;
    int* pointer_b = &b;
    int* pointer_temp = pointer_a;
    // std::swap(a, b); // - нельзя

    pointer_b = pointer_a;
    pointer_a = pointer_temp;
    a = *pointer_b;
    b = *pointer_a;
    std::cout << a << '\t' << b;

    return 0;
}
