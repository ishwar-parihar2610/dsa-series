#include <iostream>
using namespace std;
int main()
{

    int number = 12345;
    int reverseNumber = 0;
    while (number != 0)
    {

        int reminder = number % 10;
        reverseNumber = (reverseNumber * 10) + reminder;
        number = number / 10;
    }
    cout << "The reverse number is : " << reverseNumber;
    return 0;
}