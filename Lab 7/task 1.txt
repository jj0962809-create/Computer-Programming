#include <iostream>        // Input/Output library include
using namespace std;       // std ko short karne ke liye

int main() {               // Program yahan se start hota hai

    int numbers[5] = {10, 20, 30, 40, 50}; // 5 elements ka array banaya aur initialize kiya

    for(int i = 0; i < 5; i++) {  // loop 0 se 4 tak chalega (total 5 times)
        cout << numbers[i] << endl; // har index ki value print karega
    }

    return 0;              // program successfully end
}
