#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/2149/A

int numberOfOperations(int arr[], int arrSize);

int main(){

    int numOfTestCases;
    cin >> numOfTestCases;
    for (int i = 0 ; i < numOfTestCases ; i++){
        int arrSize;
        cin >> arrSize;
        int arr[arrSize];
        for (int j = 0 ; j < arrSize ; j++){
            cin >> arr[j];
        }
        cout << numberOfOperations(arr, arrSize) << endl;
    }

    return 0;
}

int numberOfOperations(int arr[],int arrSize){
    int operations = 0;
    int current = 1;
    for (int i = 0 ; i < arrSize ; i++){
        if (arr[i] == -1){
            current *= -1;
        } else if (arr [i] == 0) {
            operations++;
        }
    }
    if (current == -1) operations += 2;
    return operations;
}