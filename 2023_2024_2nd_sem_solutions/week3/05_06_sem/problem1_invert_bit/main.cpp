///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Toggle Bit
/// \version    0.1.0
/// \date       24.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n and a position k as input. The program
/// should toggle (invert) the k-th bit of the integer n (i.e., change 0 to 1 and 
/// 1 to 0) and print the resulting number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
// 1011 xor 0100 -> 1111
    int n = 256; // 272
    int k = 3;
    std::cout << (n ^ ( 1 << k));
    return 0;


  // int n = 255;
    // int k = 1;
    // int a[32];

// 1 way
    // for (size_t i = 0; i < sizeof(int) * 8; i++){ //sizeof - bite, нужно бит
    //     a[31 - i] = ((n & k) != 0 ? 1: 0);
    //     // std::cout << (n & k);
    //     k <<= 1;
    // }

    // for (int x: a)
    // std::cout << x;

// 2 way:
    // int n = 255;
    // int k = 1<<30; // самый большой разряд, сравниваем с текущим число, то пишем 1 / 0, 1 двигаем к нулю

    // for (size_t i = 0; i < sizeof(int) * 8 - 1; i++){ //sizeof - bite, нужно бит
    //     std::cout << ((n & k) != 0 ? 1: 0);
    //     k >>= 1;
    // }

    // return 0;


// n = 1001
// k = 1000 -> 100

}
