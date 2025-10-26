#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/1703/B

int main() {

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for ( int i = 0 ; i < numberOfTestCases ; i++){
        int sum = 0;
        int strSize;
        string word, problemsSolved = "";
        cin >> strSize >> word;

        for (int x = 0 ; x < strSize ; x++){
            if (problemsSolved.find(word[x]) == string::npos){
                problemsSolved += word[x];
                sum += 2;
            }
            else {
                sum+=1;
            }
        }

        cout << sum << endl;
    }

    return 0;
}