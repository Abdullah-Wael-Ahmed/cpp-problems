#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1342/A

/**
 * !input: number of test cases
 * !       firstNumber, secondNumber 
 * !       aCost, bCost
 * 
 * *output: the cheapest cost to get both numbers to zero
 * 
 * ?process: 
 * ? diffBetweenNums = absolute(Num1 - Num2) ;
 * ? diffBetweenMaxZero = max(absolute(Num1), absolute(Num2)) ;
 * ? if diffBetweenNums < diffBetweenMaxZero then // this means that the numbers are on the same side so we could use both a moves and b moves
 * ? we check which is cheaper moving the higher number to the lower number with a moves then moving both to zero using b moves
 * ? or using a moves only
 * ? else
 * ? numbers are on opposite sides so we can only use a moves
 * ? end if
 */

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