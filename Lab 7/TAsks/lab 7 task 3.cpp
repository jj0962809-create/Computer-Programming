#include <iostream>        // Input/Output ke liye
using namespace std;       // std use karne ke liye

int main() {               // Program start

    int source[5] = {1, 2, 3, 4, 5}; // source array initialize
    int destination[5];              // empty destination array

    for(int i = 0; i < 5; i++) {     // loop 5 times chalega
        destination[i] = source[i];  // source ki value destination me copy
    }

    cout << "Source: ";              // text print
    for(int i = 0; i < 5; i++) {     // loop for displaying source
        cout << source[i] << " ";    // source ke elements print
    }

    cout << endl;                    // next line

    cout << "Destination: ";         // text print
    for(int i = 0; i < 5; i++) {     // loop for displaying destination
        cout << destination[i] << " "; // copied elements print
    }

    return 0;                        // program end
}
