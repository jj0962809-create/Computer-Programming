#include <iostream>   // input/output ke liye library
using namespace std;  // std namespace use kar rahe hain

// function declaration (2 integer parameters)
void multiply(int num1, int num2)
{
    int result = num1 * num2;   // dono numbers ka product calculate kiya

    cout << "Multiplication = " << result << endl;
    // result screen par display kiya
}

int main()
{
    multiply(5, 4);   // function call ? 5 aur 4 pass kiye

    return 0;   // program end
}#include <iostream>   // input/output library
using namespace std;  // standard namespace

// function declaration (integer return karega)
int getSquare(int number)
{
    int square = number * number;   // number ka square calculate kiya

    return square;   // result wapas main function ko return kiya
}

int main()
{
    int result;   // variable result store karne ke liye

    result = getSquare(6);   // function call ? 6 pass kiya

    cout << "Square = " << result << endl;
    // result display kiya

    return 0;   // program end
}
