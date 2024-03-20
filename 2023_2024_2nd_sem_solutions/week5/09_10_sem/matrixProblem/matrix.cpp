#include <iostream>
#include <cstdlib>
#include <utility>

typedef std::pair<size_t, size_t> pair;

int** createMatrix(size_t n, size_t m)
{
    int **matrix = new int *[n];
    for (size_t i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
        for (size_t j = 0; j < m; j++)
        {
            matrix[i][j] = std::rand() % 100; // возврщает псевдорандомное число от 0 до макс
        }
    }
    return matrix;
}

void printMatrix(int** matrix, size_t n, size_t m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << '\n';
    }
}

pair findMax(int** matrix, size_t n, size_t m)
{
    // если функци макс но она не отработает
    int currentMax = **matrix; //* звёздочка - первый массив, вторая - 1 элемент этого массива
    pair maxIndex = {0, 0};    // тип данных
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (currentMax < matrix[i][j])
            {
                currentMax = matrix[i][j];
                maxIndex = {i, j};
            }
        }
    }
    return maxIndex;
}

void deleteMatrix(int** matrix, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}