#include <iostream>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/2151/C
// still time limit exceeded, have to explore "dynamic programming"

int maxStayCalc(int sensorDetects, vector<int> seconds);

int main() {

    int numberOfTestCases;

    cin >> numberOfTestCases;

    for (int i = 0 ; i < numberOfTestCases ; i++){
        int sensorDetects;
        cin >> sensorDetects;
        vector<int> seconds(sensorDetects * 2);
        for (int j = 0 ; j < sensorDetects * 2 ; j++){
            cin >> seconds[j];
        }
        maxStayCalc(sensorDetects, seconds);
        cout << endl;
    }

    return 0;
}

int maxStayCalc(int sensorDetects, vector<int> seconds){
    for (int k = 1 ; k <= sensorDetects ; k++){
        long long stayingPeopleEntrySum = 0, stayingPeopleLeavingSum = 0, sum = 0;
        for (int i = 1 ; i <= sensorDetects * 2 ; i++){
            if (i <= k - 1){
                stayingPeopleEntrySum += seconds[i - 1];
            } else if (i > (sensorDetects * 2) - (k - 1)){
                stayingPeopleLeavingSum += seconds[i - 1];
            } else {
                sum += seconds[i] - seconds[i - 1];
                i++;
            }
        }
        sum += stayingPeopleLeavingSum - stayingPeopleEntrySum;
        cout << sum << " ";
    }
    return 0;

}