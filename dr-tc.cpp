#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/2106/A

int main(){

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int x = 0 ; x < numberOfTestCases ; x++){
        int strSize, sum = 0;
        string binStr;
        cin >> strSize >> binStr;

        for( int i = 0 ; i < strSize ; i++){
            if (binStr[i] == '1'){
                sum += strSize - 1;
            } else {
                sum++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}