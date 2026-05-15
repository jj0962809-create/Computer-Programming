#include <iostream>        // Input/Output ke liye
using namespace std;       // std namespace use karne ke liye

int main() {               // Program start

    char message[] = "HELLO"; // character array (string) banayi

    for(int i = 0; message[i] != '\0'; i++) { 
    // loop start, jab tak string ka end (\0) na aaye

        cout << message[i] << endl; 
        // har iteration me ek character print hota hai
    }

    return 0;              // program end
}
