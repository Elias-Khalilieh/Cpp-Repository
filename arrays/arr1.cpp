#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    std::string students[] = {"Spongbob", "Patrick", "Squidward"};
    for (int i = 0; i < sizeof(students); i++)
    {
        std::cout << students[i] << "\n";
        std::cout << "********\n";
    }
    return 0;
}
