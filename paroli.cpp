#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string parol;
    cin >> parol;
    
    int isLower = 0, isUpper = 0, isDigit = 0, isPunct = 0;
    for (char ch : parol) 
    {
        if (islower(static_cast<unsigned char>(ch))) {
            ++isLower;
        }
        if (isupper(static_cast<unsigned char>(ch))) {
            ++isUpper;
        }
        if (isdigit(static_cast<unsigned char>(ch))) {
            ++isDigit;
        }
        
        if (ispunct(static_cast<unsigned char>(ch))) {
            ++isPunct;
        }
        
    }
    
    if (parol.size() <= 14 && parol.size() >=8)
    {
        if (isLower > 0 && isUpper > 0 && isDigit > 0) 
        {
            cout << "YES" << endl;
        } 
        else if (isLower > 0 && isUpper > 0 && isPunct > 0) 
        {
            cout << "YES" << endl;
        } 
        else if (isLower > 0 && isDigit > 0 && isPunct > 0) 
        {
            cout << "YES" << endl;
        } 
        else if (isUpper > 0 && isDigit > 0 && isPunct > 0) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    } 
 
    else
    {
        cout << "NO" << endl;
    }
    
}
