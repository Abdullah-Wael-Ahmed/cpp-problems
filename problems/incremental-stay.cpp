#include <iostream>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/2151/C
// time limit exceeded on test 8

int maxStayCalc(int sensorDetects, vector<int> seconds);

int main()
{

    int numberOfTestCases;

    cin >> numberOfTestCases;

    for (int i = 0; i < numberOfTestCases; i++)
    {
        int sensorDetects;
        cin >> sensorDetects;
        vector<int> seconds(sensorDetects * 2);
        for (int j = 0; j < sensorDetects * 2; j++)
        {
            cin >> seconds[j];
        }
        maxStayCalc(sensorDetects, seconds);
        cout << endl;
    }

    return 0;
}

int maxStayCalc(int sensorDetects, vector<int> seconds)
{
    long long stayingPeopleSum = 0;
    for (int k = 1; k <= sensorDetects; k++)
    {
        long long sum = 0;
        sum += stayingPeopleSum;
        for (int i = k; i <= (sensorDetects * 2) - (k - 1); i++)
        {
            sum += seconds[i] - seconds[i - 1];
            i++;
        }
        stayingPeopleSum += seconds[(sensorDetects * 2) - (k)] - seconds[k - 1];
        cout << sum << " ";
    }
    return 0;
}