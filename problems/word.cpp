#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// https://codeforces.com/problemset/problem/59/A

int main () {

    string word;
    cin >> word;
    int upperChars = 0;

    for (char x : word){
        if(isupper(x)) upperChars++;
    }

    if (upperChars > word.size() / 2){
        for (int i = 0 ; i < word.size() ; i++) {
            word[i] = toupper(word[i]);
        }
    }else {
        for (int i = 0 ; i < word.size() ; i++) {
            word[i] = tolower(word[i]);
        }
    }
    
    cout << word;

    return 0;
}