#include <iostream>     // Input/Output library include kar rahe hain

using namespace std;    // Standard namespace use kar rahe hain

int main() {            // Program ka starting point

    // 3x3 ka 2D array declare aur initialize kar rahe hain
    int matrix[3][3] = {
        {1, 2, 3},      // Row 1
        {4, 5, 6},      // Row 2
        {7, 8, 9}       // Row 3
    };

    // Outer loop rows ke liye (i row ko represent karta hai)
    for(int i = 0; i < 3; i++) {

        // Inner loop columns ke liye (j column ko represent karta hai)
        for(int j = 0; j < 3; j++) {

            // Har element print kar rahe hain (row i, column j)
            cout << matrix[i][j] << " ";
        }

        // Har row ke baad next line par jaane ke liye
        cout << endl;
    }

    return 0;   // Program successful end
}
