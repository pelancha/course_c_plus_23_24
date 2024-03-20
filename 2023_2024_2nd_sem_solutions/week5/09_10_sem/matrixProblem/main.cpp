#include <iostream>
#include "matrix.h"
#include <utility>

typedef std::pair<size_t , size_t> pair;

int main()
{
    size_t n, m;
    pair maxIndex;
    std::cin >> n >> m;

    int** matrix = createMatrix(n, m);
    printMatrix(matrix, n, m);
    maxIndex = findMax(matrix, n, n);
    std::cout << maxIndex.first << '\t' << maxIndex.second;
    deleteMatrix(matrix, n);





    // int** matrix = createMatrix(n, m);
}






// int a[10]; //статический масси
//     //динамический - определяем размер в программе
//     int* b = new int*[n]; //new -  возвращает участок памяти на компе, создавая указатель на первый элемент; всего n элементов
//     // [ ] - * для одномерного ; [[],    ]  - ** - указатель на внутренний массив