#include <iostream>
using namespace std;

double calcArea(double side) {
    return side * side;
}
double calcPerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area of square:      " << calcArea(side)      << endl;
    cout << "Perimeter of square: " << calcPerimeter(side) << endl;

    return 0;
}
