#include <iostream>
using namespace std;

int main()
{
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name;
    return 0;
    // While (1 == 1){} This is an infinte while loop
}
