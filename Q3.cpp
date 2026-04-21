#include <iostream>
using namespace std;

// Function to calculate the area of a square
// Formula: side * side
double calcArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a square
// Formula: 4 * side
double calcPerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    // Prompt user to enter the side length
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Call the functions and display results
    cout << "Area of square:      " << calcArea(side)      << endl;
    cout << "Perimeter of square: " << calcPerimeter(side) << endl;

    return 0;
}