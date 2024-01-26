#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, int> counter;
    string word;
    int wordsCount = 0;
    while(cin >> word) {
       ++wordsCount;
        set<char> letters(word.begin(), word.end());
        for(char c : letters){
            ++counter[c];
        }
        
    }
    for(auto [c, freq] : counter){
        if(freq == wordsCount){
            cout << c;
        }
    }
    cout << "\n";
}