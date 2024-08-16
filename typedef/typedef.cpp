#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int >> pairlist_t //this is an alias

// typedef std::string text_t;
// typedef int number_t;
// type def was replaced with using keyword
// because it more suitable for templates

using text_t = std::string;
using number_t = int;

int main()
{

    text_t first_name = "Elias";
    std::cout << first_name << '\n';
    number_t age = 24;
    std::cout << age << '\n';
    return 0;
}