#include <iostream>
#include <string>
using namespace std;

int main(){

    int x[5] = {1, 2, 3, 4, 5};
    delete(x);
    cout << x[2];
    return 0;
}