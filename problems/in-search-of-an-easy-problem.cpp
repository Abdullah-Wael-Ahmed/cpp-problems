#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1030/A

int main(){

    int numberOfPeople;
    cin >> numberOfPeople;

    for (int i = 0 ; i < numberOfPeople ; i++){
        int res;
        cin >> res;
        if (res == 1) {
            cout << "HARD";
            return  0;
        }
    }
    cout << "EASY";
    return 0;
}