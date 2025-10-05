#include <iostream>;
#include <string>;
using namespace std;

// https://codeforces.com/problemset/problem/1676/A

int main () {

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0 ; i < numberOfTestCases ; i++){
        string num;
        cin >> num;
        int firstSum = (num[0] - '0') + (num[1] - '0') + (num[2] - '0');  
        int lastSum = (num[3] - '0') + (num[4] - '0') + (num[5] - '0');

        cout << (firstSum == lastSum ? "YES" : "NO") << endl;
    }

    return 0;
}