#include <vector>

typedef std::vector <std::vector <std::string>> stringMatrix;
enum CSV_FIELDS {PassengerId, Survived, Pclass, Name,
                Sex, Age, SibSp, Parch, Ticket, Fare, Cabin, Embarked}; //нумерация столбцов таблицы



void printMatrix(const stringMatrix&);
stringMatrix readCsv(const std::string&);
double defineRate(short, short, short);
void fillNan (stringMatrix&, int);
void fillRate (stringMatrix&);
void writeCsv(const std::string&, const stringMatrix&);