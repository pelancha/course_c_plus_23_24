////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: "String indices".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Work with operator[], and length() property. Consider valid indices of an
/// std::string object.
///
////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// #include <string>

// int main()
// {
//     std::string str = "abc"; //{"abc"} но тогда в cmake lists version >=17 
//     // for (size_t i = 0; i < str.length(); i++){
//     //     std::cout << str[i] << '\t';
//     // }

//     for (char  s: str){
//         std::cout << s << '\t';
//     }
//     return 0;
// }


#include <iostream>
namespace s{int a = 10;}
using namespace s; //все переменные из s можно исопльзовать без s::
// using s::a; //чтобы всё не испортировать

int main(){
    int c = 5;
    int& b = c; //в c кладём ссылку на память c; * - pointer, хранит саму ссылку но не меняет
    c += 5;

    int a[] = {1, 2, 3, 4}; //без = по версии

    // for (int i: a){
    //     i++; //исходное не меняется
    // }


    for (int& i: a){
        i++; //обращение к оригиналу
    }

    for (int i: a){
        std:: cout << i << '\t';
    }
    std::cout << &c << '\t' << &b << std::endl; //чтобы достать какую-то переменную из namespace пишется ::
    return 0;
}
