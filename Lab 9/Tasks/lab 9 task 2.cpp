#include <iostream>   // Input/output library
using namespace std;  // std ko avoid karne ke liye

// Function declaration
// Yeh function koi parameter nahi leta
void sayHello();

int main() 
{
    // Function call
    // sayHello function yahan execute hoga
    sayHello();

    return 0;   // Program end
}

// Function definition
void sayHello() 
{
    // Simple message print
    cout << "Hello, World!" << endl;
}