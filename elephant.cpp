#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/617/A

int main() {

    int x, sum;
    cin >> x;

    if (x % 5 != 0){
        sum ++;
        x -= x % 5;
        if (x != 0) sum += x / 5;
    } else {
        sum += x / 5;
    }

    cout << sum;

    return 0;
}