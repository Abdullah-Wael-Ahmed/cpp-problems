#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1742/A

int main() {

    int numberOfTestCases;
    cin >> numberOfTestCases;
    for (int i = 0; i < numberOfTestCases ; i++){
        int max = 0, sum = 0;
        for (int j = 0 ; j < 3 ; j++){
            int n;
            cin >> n;
            if (n > max) {
                sum += max;
                max = n;
            } else {
                sum += n;
            }
        }
        cout << (max == sum ? "YES" : "NO") << endl;
    }

    return 0;
}