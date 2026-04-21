#include <iostream>
#include <cmath>  
using namespace std;

int main() {
   
    const double PI = 3.14159265358979;

    double radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double rCubed = pow(radius, 3);

    double volume = (4.0 / 3.0) * PI * rCubed;

    cout << "Volume of sphere with radius " << radius
         << ": " << volume << endl;

    return 0;
}