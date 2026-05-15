#include <iostream>   // input/output library
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