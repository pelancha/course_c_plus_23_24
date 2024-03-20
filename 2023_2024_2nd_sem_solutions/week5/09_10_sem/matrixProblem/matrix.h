#include <utility>

typedef std::pair<size_t , size_t >pair;

int** createMatrix(size_t, size_t);
void printMatrix(int**, size_t, size_t);
pair findMax(int**, size_t, size_t);
void deleteMatrix(int**, size_t);
