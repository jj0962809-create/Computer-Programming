// Name: M.Junaid
// Registration Number: BF25NWELE0695
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program: Calculate the sum of numbers from 1 to a user-entered positive integer
// using a while loop

#include <iostream>   
// iostream library include ki gayi hai taake hum input (cin) aur output (cout) use kar saken

using namespace std;  
// std namespace use kiya gaya hai taake cout aur cin ke sath std:: bar bar na likhna pade

int main()            
// main() function program ka starting point hota hai
{
    int num, i = 1, sum = 0;
    // num ? user se liya gaya number store karega
    // i ? loop counter hai jo 1 se start hoga
    // sum ? total sum store karega, is liye isko 0 se initialize kiya

    cout << "Enter a positive integer: ";
    // user ko message diya gaya hai ke woh ek positive integer enter kare

    cin >> num;
    // user ka input num variable me store ho jayega

    while(i <= num)
    // while loop tab tak chalega jab tak i ki value num se chhoti ya barabar hai
    {
        sum = sum + i;
        // har iteration me i ki value sum me add ki ja rahi hai
        // is tarah gradually 1 + 2 + 3 + ... + num ka sum calculate hota hai

        i++;
        // i++ increment operator hai jo i ki value ko 1 se increase karta hai
        // taake next number loop me process ho sake
    }

    cout << "Sum = " << sum << endl;
    // final calculated sum screen par display kiya ja raha hai

    return 0;
    // program successfully end ho gaya
}
