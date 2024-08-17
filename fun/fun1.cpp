#include <iostream>
#include <cstdlib>
#include <ctime>

double square(double length);
double cube(double length);

int main()
{

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area = " << area << "cm*cm \n";
    std::cout << "Volume  = " << volume << "cm*cm*cm \n";
    return 0;
}

double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}
