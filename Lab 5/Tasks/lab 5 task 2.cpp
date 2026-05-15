// Name: M.Junaid
// Registration Number: BF25NWELE0695
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program: Print numbers from 1 to 10 using do-while loop

#include <iostream>   
// iostream library include ki gayi hai taake hum output ke liye cout use kar saken

using namespace std;  
// std namespace use kiya gaya hai taake cout aur endl ke sath std:: na likhna pade

int main()            
// main() function program ka starting point hota hai
{
    int i = 1;        
    // integer variable 'i' declare kiya aur uski initial value 1 rakhi
    // ye variable loop ko control karega

    do
    {
        cout << i << endl;   
        // current value of i screen par print karta hai
        // endl next line par output show karta hai

        i++;                 
        // i++ increment operator hai jo i ki value ko 1 se increase karta hai
        // har iteration ke baad value barh jati hai

    }
    while(i <= 10);          
    // do-while loop ki condition
    // loop tab tak repeat hoga jab tak i ki value 10 se chhoti ya barabar hai
    // do-while loop me body pehle execute hoti hai phir condition check hoti hai

    return 0;   
    // return 0 ka matlab program successfully end ho gaya
}
