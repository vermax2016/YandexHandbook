#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> numbers;
    
    int number;
    
    while(cin >> number) {
        if(numbers.contains(number)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
            numbers.insert(number);
        }
    }
}