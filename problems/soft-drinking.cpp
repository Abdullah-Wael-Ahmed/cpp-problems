#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/151/A

int main(){

    int 
    numberOfFriends,
    numberOfBottles,
    millilitersPerBottle,
    numberOfLimes,
    slicesPerLime,
    gramsOfSalt,
    millilitersNeeded,
    gramsNeeded,
    totalMilliLiters,
    totalSlices;

    cin >> numberOfFriends;
    cin >> numberOfBottles;
    cin >> millilitersPerBottle;
    cin >> numberOfLimes;
    cin >> slicesPerLime;
    cin >> gramsOfSalt;
    cin >> millilitersNeeded;
    cin >> gramsNeeded;

    totalMilliLiters = numberOfBottles * millilitersPerBottle;
    totalSlices = numberOfLimes * slicesPerLime;

    cout << min(totalMilliLiters/millilitersNeeded, min(totalSlices, gramsOfSalt/gramsNeeded)) / numberOfFriends;

    return 0;
}