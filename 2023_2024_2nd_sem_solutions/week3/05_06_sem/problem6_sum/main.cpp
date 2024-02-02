///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Sum of Two Numbers
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads two integers from the standard input and calculates
/// their sum using pointers. Print the result.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "func.h" // заголовочный файл где есть функция но нет её реализации; свои библиотеки в квадратных кавычках
// можно поставить code runner 





int main()
{
    int k = 12;
    int n = 11;
    int* k1 = &k;
    int* n1 = &n;
    std::cout << (sum(k1, n1));

    return 0;
}


//если изменён один только файл, удобно компилировать по всем этапам 1 файл и потом пересобрать весь проект
// https://habr.com/ru/articles/478124/