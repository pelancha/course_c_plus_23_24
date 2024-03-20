#include <iostream>
#include "titanic.h"

const std::string PATH = "../data_titanic/titanic.csv";

// enum CSV_FIELDS {PassengerId = 1, Survived, Pclass, Name,
//                 Sex, Age, SibSp, Parch, Ticket, Fare, Cabin, Embarked}; //если хотим нумерацию столбцов с 1

int main()
{
    stringMatrix matrix = readCsv(PATH);
    for (int i: {CSV_FIELDS::Age, CSV_FIELDS::Sex, CSV_FIELDS::Pclass})
        fillNan(matrix, i);
    fillRate(matrix);
    printMatrix(matrix);
    writeCsv("output.csv", matrix);
    return 0;
}
