#include <iostream>     // Input/Output ke liye

using namespace std;    

int main() {

    // 3x3 array initialize kar rahe hain
    int arr[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;   // Total sum store karne ke liye variable

    // ===== Row Sum =====
    for(int i = 0; i < 3; i++) {     // Har row ke liye loop
        int rowSum = 0;              // Har row ka sum reset

        for(int j = 0; j < 3; j++) { // Row ke andar columns
            rowSum += arr[i][j];     // Row ke elements add kar rahe hain
            totalSum += arr[i][j];   // Total sum bhi update kar rahe hain
        }

        // Har row ka sum print
        cout << "Row " << i+1 << " Sum = " << rowSum << endl;
    }

    // ===== Column Sum =====
    for(int j = 0; j < 3; j++) {     // Har column ke liye loop
        int colSum = 0;              // Column sum reset

        for(int i = 0; i < 3; i++) { // Har row ka same column
            colSum += arr[i][j];     // Column ke elements add
        }

        // Har column ka sum print
        cout << "Column " << j+1 << " Sum = " << colSum << endl;
    }

    // Total sum print
    cout << "Total Sum = " << totalSum << endl;

    return 0;   // Program end
}
