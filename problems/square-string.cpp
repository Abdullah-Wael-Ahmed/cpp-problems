#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/1619/A

int main() {

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0 ; i < numberOfTestCases ; i++){
        string word;
        cin >> word;
        if (word.size() % 2 == 0 && word.substr(0, word.size() / 2) == word.substr(word.size() / 2)){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    

    return 0;
}