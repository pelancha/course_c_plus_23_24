///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a function that copies the content of one file to another file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream> 
#include <iostream>

void copyFile(const std::string& sourceFilePath, const std::string& destinationFilePath)
{
    std::ifstream ifile(sourceFilePath);
    if (!ifile)
    {
        std::cout << "file not found";
    }
    std::string s;
    std::ofstream ofile(destinationFilePath);
    while (std::getline(ifile, s)) 
    {
        ofile << s << '\n';
        // std::cout << s;
        // break;
    }
}


int main() {
    copyFile("../data/source.txt", "../data/destination.txt");
    return 0;
}
