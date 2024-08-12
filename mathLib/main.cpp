#include <iostream>
#include <cmath>

using namespace std;


int main() {
    const double pi = 3.1415;
    double result = floor(1.2);
    cout << result << endl;

    double result2 = pow(2,4);
    cout << result2 << endl;

    cout << "Please enter the radius of the circle:"<< endl;
    double radius;
    cin >> radius;
    double area = pi * pow(radius,2);
    cout << "Area of the circle is: " << area << endl;
    return 0;
}
