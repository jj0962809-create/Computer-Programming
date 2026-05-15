#include <iostream>        // Input/Output ke liye
using namespace std;       // std use karne ke liye

int main() {               // Program start

    int arr[5];            // 5 elements ka array banaya
    int sum = 0;           // sum variable ko 0 se start kiya

    for(int i = 0; i < 5; i++) {   // loop 5 times chalega
        cin >> arr[i];             // user se values input lena
    }

    for(int i = 0; i < 5; i++) {   // loop dobara chalega
        sum += arr[i];             // har element ko sum me add karna
    }

    cout << "Sum = " << sum;       // final sum print

    return 0;                      // program end
}
