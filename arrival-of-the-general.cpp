#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/144/A

int main(){

    int numberOfSoldiers;
    cin >> numberOfSoldiers;

    int min, minIndex, max, maxIndex;

    for (int i = 0 ; i < numberOfSoldiers ; i++){
        int currentSoldier;
        cin >> currentSoldier;
        if (i == 0){
            min = currentSoldier;
            max = currentSoldier;
            continue;
        }

        if (min >= currentSoldier){
            min = currentSoldier;
            minIndex = i;
        }
        if (max < currentSoldier){
            max = currentSoldier;
            maxIndex = i;
        }
    }

    int sum = 0;

    sum += (numberOfSoldiers - 1) - minIndex;

    if (maxIndex > minIndex) maxIndex--;

    sum += maxIndex;

    cout << sum;

    return 0;
}