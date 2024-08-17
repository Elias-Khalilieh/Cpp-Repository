#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name can't be over 12 characters!!";
    // }
    // else
    // {
    //     std::cout << "Welcome >> " << name;
    // }
    if (name.empty())
    {
        std::cout << "You didn't enter a name !!!!";
    }
    else
    {
        std::cout << "Hello " << name;
    }
    return 0;
    // name.clear() clears the name
    // name.append() appends another characters to the name
    // name.at()
    // name.insert(index at , "characters to be insterted")
    // name.find('character or spaces to be found')
    // name.erase(beg. ind., end. ind.)
}
