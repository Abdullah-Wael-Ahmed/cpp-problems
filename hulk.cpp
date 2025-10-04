#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/705/A

int main(){

    int numberOfLayers;
    cin >> numberOfLayers;

    for (int i = 0 ; i < numberOfLayers ; i++){
        if (i != 0) cout << " that ";

        cout << (i % 2 == 0 ? "I hate" : "I love");

    }

    cout << " it";

}