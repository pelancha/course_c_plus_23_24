// нужно открывать не все недели одновременно а раздельно и тогда он видит файл

#include <iostream>
#include <fstream> 
#include <string>
#include <sstream>

// int main()
// {
//     int sum = 0;
// //EOF
//     std::ifstream iFile; //input file stream
//     iFile.open("../data/input.txt"); //. - текущая папка, .. - на уровень выше, здесь - all_contests
//     std::string line;

//     if (!iFile)
//         std::cout << "file not found";

//     while (iFile.good() && !iFile.eof()) // ! - not; good - это filestream рельно, можно не писать
//     {
//         std::getline(iFile, line);
//         std::stringstream ss(line); //обычно называют сс, с ss работать как с cin
//         int value;
//         while (!ss.eof())
//         {
//             ss >> value;
//             sum += value; //автоматически преобразует в инт
//         }
//     }
//     std::cout << sum;
// }

// int sumIntegersInFile


int main()
{
    int sum = 0;
    std::ifstream iFile; //input file stream
    iFile.open("../data/input.txt"); //. - текущая папка, .. - на уровень выше, здесь - all_contests
    std::string line;
    
    if (!iFile)
        std::cout << "file not found";

    while (iFile.good() && !iFile.eof()) // ! - not; good - это filestream рельно, можно не писать
    {
        std::getline(iFile, line);
        std::stringstream ss(line); //обычно называют сс, с ss работать как с cin
        int value;
        while (!ss.eof())
        {
            ss >> value;
            sum += value; //автоматически преобразует в инт
        }
    }
    std::cout << sum;

    std::ofstream ofile("../data/output.txt");
    ofile << sum;

    iFile.close();
    ofile.close();
    return 0;

    //когда функция закрываются потоки исчезают, тк закрываются потоки видимости
}