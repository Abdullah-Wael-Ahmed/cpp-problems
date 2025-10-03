#include <iostream>
using namespace std;

int main() {
    int numberOfKilos;
    cin >> numberOfKilos;
    cout << (numberOfKilos%2 == 0  && numberOfKilos != 2 ? "YES" : "NO");
    return 0;
}