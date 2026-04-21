#include <iostream>
#include <cctype>   
using namespace std;

string checkCase(char ch) {
    if (isupper(ch)) {
        
        return "uppercase";
    } else if (islower(ch)) {
        
        return "lowercase";
    } else {
        
        return "neither uppercase nor lowercase";
    }
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "'" << ch << "' is " << checkCase(ch) << endl;

    return 0;
}