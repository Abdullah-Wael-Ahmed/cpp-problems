#include <iostream>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/2151/C
// time limit exceeded 😭

int maxStayCalc(int sensorDetects, vector<int> seconds);

int main() {

    int numberOfTestCases;

    cin >> numberOfTestCases;

    for (int i = 0 ; i < numberOfTestCases ; i++){
        int sensorDetects;
        cin >> sensorDetects;
        vector<int> seconds;
        for (int j = 0 ; j < sensorDetects * 2 ; j++){
            int num;
            cin >> num;
            seconds.push_back(num);
        }
        maxStayCalc(sensorDetects, seconds);
        cout << endl;
    }

    return 0;
}

int maxStayCalc(int sensorDetects, vector<int> ogSeconds){

    
    for (int k = 1 ; k <= sensorDetects ; k++){
        vector<int> seconds = ogSeconds;
        long long sum = 0;
        if (k > 1){
            for (int i = 1 ; i < k ; i++){
                sum += seconds[seconds.size() - 1] - seconds[0];
                seconds.erase(seconds.begin());
                seconds.erase(seconds.end() - 1);
                
            }
        }
        while (seconds.size() > 0) {
            sum += seconds[1] - seconds[0];
            seconds.erase(seconds.begin(), seconds.begin() + 2);

        }
        cout << sum << " ";
    }
    return 0;

}