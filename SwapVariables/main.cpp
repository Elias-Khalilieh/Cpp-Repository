#include <iostream>

int main() {
    int x = 10;
    int y = 20;
    int temp = 0;
    temp = y;
    y = x;
    x = temp ;
    std:: cout << " Value of X is :";
    std:: cout << x;
    std:: cout << " Value of Y is :";
    std:: cout << y;
    return 0;
}
