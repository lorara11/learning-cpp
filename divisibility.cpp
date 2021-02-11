#include <iostream>

using namespace std;

bool is_divisible(int number, int divisor, int &remainder)
{
    while (number >= divisor){
        number = number - divisor;
    }
    if (number == 0){
        return true;
    } else {
        remainder = number;
        return false;
    }
}

int main()
{
    int number, divisor, remainder;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter divisor: ";
    cin >> divisor;
    if (is_divisible(number, divisor, remainder)){
        cout << number << " is divisible by " << divisor << endl;
    } else {
        cout << number << " is not divisible by " << divisor << endl;
        cout << number << "/" << divisor << " has remainder " << remainder << endl;
    }

    return 0;
}