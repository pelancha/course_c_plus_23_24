///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program to count the number of lines, words, and characters in a text file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <sstream> 
#include <cctype>

bool isWord(const std::string& word, size_t& c) //string - контейнер (надстройка над с++) более верхнеуровый тип данных чем с-подобный массив поэтому * нельзя
{
    bool flag = true;
    for (char elem: word)
    {
        if (!std::isalpha(elem))
            flag = std::ispunct(elem);
        else
            c++;
    }
    return flag;
}

void countFileStatistics(const std::string& filePath)
{
    std::ifstream ifile(filePath);
    size_t l = 0, w = 0, c = 0;
    std::string line;

    while (std::getline(ifile, line))
    {
        l++;
        std::replace(line.begin(), line.end(), '-', ' ');
        std::stringstream ss(line);//лайн - из чего собирается стрингстрим
        std::cout << line << '\n';
        while (!ss.eof())
        {
            std::string word;
            ss >> word;
            if (isWord(word, c))
            {
                w++;
            }
        }
    }
    std::cout << l << '\t' << w <<'\t' << c;
}




int main() {
    countFileStatistics("../data/source.txt");
    return 0;
}