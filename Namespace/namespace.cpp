#include <iostream>
using namespace std;

namespace first
{
    int x = 0;
}

int main()
{
    int x = 1;
    cout << x << '\n';
    cout << first::x;
}