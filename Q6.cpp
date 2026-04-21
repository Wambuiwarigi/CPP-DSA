#include <iostream>
using namespace std;

int main() {
    
    const int SIZE = 5;

    double values[SIZE];

    cout << "Enter 5 values:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "  Value [" << (i + 1) << "]: ";
        cin >> values[i];   
    }
  
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += values[i];   
    }

    double average = sum / SIZE;

    cout << "Average of the 5 values: " << average << endl;

    return 0;
}