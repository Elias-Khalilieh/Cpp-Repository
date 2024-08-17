#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    std::string students[] = {"Spongbob", "Patrick", "Squidward"};
    for (std::string student : students)
    {
        std::cout << student << "\n";
    }
    return 0;
}
