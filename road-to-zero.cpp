#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1342/A

int main(){

    int numberOfTestCases;
    cin >> numberOfTestCases;
    for (int i = 0 ; i < numberOfTestCases ; i++){
        long long x, y, a, b, aMoves = 0, bMoves = 0, bcost, diffBetweenNums, diffBetweenMaxZero, sum;
        cin >> x >> y;
        cin >> a >> b;


        diffBetweenNums = abs(x - y);
        diffBetweenMaxZero = max(abs(x), abs(y));

        if (diffBetweenNums < diffBetweenMaxZero) {
            aMoves = diffBetweenNums;
            bMoves = diffBetweenMaxZero - diffBetweenNums;
            bcost = min(bMoves * b, bMoves * a * 2);
            sum = aMoves * a + bcost;
        } else {
            aMoves = abs(x) + abs(y);
            sum = aMoves * a;
        }

        cout << sum << endl;
    }    
    return 0;
}