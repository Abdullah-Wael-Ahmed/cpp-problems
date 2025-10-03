#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/4/A

int main() {
    int numberOfKilos;
    cin >> numberOfKilos;
    cout << (numberOfKilos%2 == 0  && numberOfKilos != 2 ? "YES" : "NO");
    return 0;
}