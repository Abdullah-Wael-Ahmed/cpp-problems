#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/996/A

int main(){

    int balance, bills = 0;

    cin >> balance ;

    while (balance > 0) { 
        if (balance >= 100){
            bills+= balance / 100;
            balance = balance % 100;
        }else if (balance >= 20) {
            bills+= balance / 20;
            balance = balance % 20;
        }else if (balance >= 10){
            bills+= balance / 10;
            balance = balance % 10;
        }else if (balance >= 5){
            bills+= balance / 5;
            balance = balance % 5;
        }else {
            bills += balance;
            balance = 0;
        }
    }

    cout << bills ;

    return 0;
}