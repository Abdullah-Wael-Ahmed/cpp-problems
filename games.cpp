#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/268/A

int main() {
    int numberOfTeams, guestTimes = 0;
    
    cin >> numberOfTeams;
    
    int teams[numberOfTeams][2] = {};


    for (int i = 0 ; i < numberOfTeams ; i++){
        cin >> teams[i][0] >> teams[i][1];
    }

    for (int i = 0 ; i < numberOfTeams - 1 ; i++){
        for (int j = i + 1 ; j < numberOfTeams ; j++){
            if (teams[i][0] == teams[j][1]) guestTimes++;
            if (teams[i][1] == teams[j][0]) guestTimes++;
        }
    }

    cout << guestTimes;

    return 0;
}