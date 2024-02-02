////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 2: "Length of a C-string (strlen)".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Count the length of a C-style string variable initialized with a
/// string
/// literal (implement strlen() ).
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>

int lenStr(char str[])
{
    size_t len = 0;
    for (int i=0; i<sizeof(str); i++)
    {
        if (str[i] != "\0")
            len ++
        else
            std::cout << int(str[i])
    }
}

int main()
{

    // TODO: input your code here
    // int a[] ={1, 2, 3, 4};
    // char string[] = "some";

    char string[256];
    std::cin >> string;
    std::cout << sizeof(size_t) << "\t" <<
     sizeof(string) << "\t" << strlen(string)  << '\t' <<
     lenStr(string) << "\n";

    return 0;
}
