#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/236/A

int main() {

    string word, distinctletters = "";
    int distinct;

    cin >> word;

    for (int i = 0 ; i <word.size() ; i++){
        if (distinctletters.find(word[i]) == string::npos ){
            distinct++;
            distinctletters+= word[i];
        }
    }

    cout << (distinct % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");




}