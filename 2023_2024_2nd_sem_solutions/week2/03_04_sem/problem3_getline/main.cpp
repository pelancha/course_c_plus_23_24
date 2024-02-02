////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Reading text strings using getline".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Train reading text string with spaces and other special symbol using
/// cin.getline() for c-strings and std::getline() for std::string-s.
/// Then, consider the “read lines until first empty line” idiom.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>

int main()
{
    // // TODO: input your code here
    // char cstring[4];
    // // std::cin >> cstring;
    // std::cin.getline(cstring, 10);
    // std::cout << cstring << '\n';

    // return 0;

    // int arr[] = {1, 2, 3, 4};

//указатель на адрес int
    // int* pointer = arr;
    // *pointer = 10; // знаечние по ссылке  меняется



    // for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++) //sizeof выводит, можно ++i тк i увеличивается после прохода по циклу
        // std::cout << (arr + i) << "\t" << &arr[i] << "\n"; // arr - ссылка на 1 байт, * - доступ по ссылке; адрес - всегда 8 байт, & - доступ к ссылке
        // std::cout << pointer ++ << "\t" << &arr[i] << "\n";
    
    // char cstring[] = 'qwerty';

    // for (char x:cstring)
    // {
    //     std::cout << x << '\t';
    // }


    // std::getline(std::cin, str);
    // std::cout >> str;

    // int x = 2;
    // bool isEven = (x % 2 == 0 ? true:false);
    
    return 0;
}
