#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vec = {1, 2, 3};
    vec.push_back(4);
    std::cout << *(vec.end() - 1);
    return 0;
}
