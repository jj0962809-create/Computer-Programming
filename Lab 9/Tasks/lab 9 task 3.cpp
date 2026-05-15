#include <iostream>   // Input/Output ke liye library
using namespace std;  // std likhne se bachne ke liye

// Function declaration (prototype)
// Yeh batata hai ke function ka naam kya hai aur kya input/output hoga
int calculateSum(int arr[], int size);

int main() 
{
    const int SIZE = 10;   // Array ka fixed size (change nahi ho sakta)
    
    int numbers[SIZE];     // 10 integers ka array banaya
    
    int sum;               // Sum store karne ke liye variable
    double average;        // Average store karne ke liye (decimal value)

    // User se 10 numbers lene ke liye loop
    cout << "Enter 10 integers:" << endl;
    
    for(int i = 0; i < SIZE; i++)   // Loop 0 se 9 tak chalega
    {
        cin >> numbers[i];          // Har input array ke index me store hoga
    }

    // Function call
    // Array aur uska size function ko pass kiya
    sum = calculateSum(numbers, SIZE);

    // Average calculate kiya
    // (double) lagaya taake decimal result aaye
    average = (double)sum / SIZE;

    // Output display
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;   // Program successfully end
}

// Function definition
int calculateSum(int arr[], int size) 
{
    int sum = 0;   // Sum ko 0 se start kiya

    // Loop array ke tamam elements ko add karega
    for(int i = 0; i < size; i++) 
    {
        sum = sum + arr[i];   // Har element sum me add hota hai
    }

    return sum;   // Final sum wapas main function ko bhej diya
}