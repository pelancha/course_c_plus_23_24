///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Sum digits
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes a number and
/// find sum of digits recursively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>


const int LEN = 251;
short remainder(short, char*);

int main()
{
    char s[LEN];
    short n;
    std::cin >> n >> s;
    std::cout << remainder(n, s);

    return 0;
}

short remainder(short n, char* s)
{
    short remain = (s[0] - '0') % n;

    for (size_t i = 1; i < strlen(s);)
    {
        if (remain > n)
        {
            remain = remain % n;
            i ++;
        }
        else 
        {
            remain = remain * 10 + (s[i] - '0');
            // remain = (int) remain % n;
        }

    }
    return remain;
}