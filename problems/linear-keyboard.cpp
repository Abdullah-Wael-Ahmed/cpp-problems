#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// https://codeforces.com/problemset/problem/1607/A

int main() {

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0 ; i < numberOfTestCases ; i++){
        string alphabet, word;
        cin >> alphabet;
        cin >> word;
        int lastIndex, sum = 0;
        for (int x = 0 ; x < word.length() ; x++){
            if ( x > 0 ){
                int currentIndex = alphabet.find(word[x]);
                if (currentIndex == lastIndex) continue;
                sum += abs(currentIndex - lastIndex);
                lastIndex = currentIndex;
            } else {
                lastIndex = alphabet.find(word[x]);
            }
        }
        cout << sum << endl;
    }

    return 0;
}