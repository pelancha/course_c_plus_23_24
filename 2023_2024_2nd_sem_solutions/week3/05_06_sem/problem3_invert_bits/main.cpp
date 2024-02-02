///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Bitwise Complement
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n as input and performs bitwise complement
/// (inverts all bits) on it. Print the resulting number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int n, mask;
    mask = 1<<31;
    int a[32];
    std::cin >> n;
    for(size_t i = 0; i <= sizeof(int); i++)
    {
        std::cout << (n^1);
    }
    std::cout << (n^mask);

    return 0;
}
