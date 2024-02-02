////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 5: "Print ASCII table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Print the “printable part” of the ASCII table using tabs for aligning.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <sstream> //string stream

typedef char c; // объявление чар = с



int main()
{
    for (c i = 32; i < 127; i++){
        if (i == 32){
            for (size_t j = 0; j < 16; j++){
                std::stringstream ss;
                ss << std::hex << std::uppercase << j;
                std::string str;
                ss >> str;
                std::cout << str << '\t';
            }
        }
        
        std::cout << i << (i % 16 == 0 ? '\n': '\t');

    return 0;
}
}

//printable c 32