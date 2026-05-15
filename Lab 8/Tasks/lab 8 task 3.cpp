#include <iostream>     // Input/Output library

using namespace std;

int main() {

    // 4x4 array initialize kar rahe hain
    int arr[4][4] = {
        {10, 25, 3, 8},
        {14, 6, 19, 2},
        {7, 30, 11, 5},
        {9, 18, 22, 1}
    };

    // Pehle element ko maximum assume kar rahe hain
    int maxVal = arr[0][0];

    // Poora array traverse karne ke liye nested loops
    for(int i = 0; i < 4; i++) {        // Rows ke liye
        for(int j = 0; j < 4; j++) {    // Columns ke liye

            // Agar current element max se bara ho
            if(arr[i][j] > maxVal) {

                // To max value update kar do
                maxVal = arr[i][j];
            }
        }
    }

    // Final maximum value print
    cout << "Maximum Value = " << maxVal << endl;

    return 0;   // Program end
}
