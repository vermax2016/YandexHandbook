#include <iostream>

using namespace std;

int main ()
{
    unsigned int number;
    cin >> number;
    unsigned int sum = 0;

    while (number != 0) 
    {
        sum = sum + number % 10;
        number = number/10;
    } 
    
    cout << sum << endl;
}
