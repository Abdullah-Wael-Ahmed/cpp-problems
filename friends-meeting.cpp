#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/931/A

int main(){

    int a, b;
    cin >> a >> b;

    int diff = abs(b - a); // 5
    int sum = 0 ;

    for (int i = 1 ; i <= (diff % 2 == 0 ? diff / 2 : (diff - 1) / 2) ; i++){
        sum+=i;
    }
    sum *= 2;

    if (diff % 2 != 0){
        sum += ((diff - 1) / 2) + 1;
    }

    cout << sum;

    return 0;
}