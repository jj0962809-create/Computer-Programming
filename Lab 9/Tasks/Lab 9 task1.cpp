#include <iostream>   // Input/output ke liye library
using namespace std;  // std ko avoid karne ke liye

// Function declaration (prototype)
// Yeh batata hai ke greet naam ka function hai
void greet();

int main() 
{
    // Function call
    // Yahan greet function execute hoga
    greet();

    return 0;   // Program successfully end
}

// Function definition
void greet() 
{
    // Message display kar raha hai
    cout << "Assalam-o-Alaikum! Welcome to C++ Programming!" << endl;
}
