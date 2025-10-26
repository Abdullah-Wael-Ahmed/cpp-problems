#include <iostream>
#include <string>
using namespace std;

int main(){

    int wordLength, sum;
    cin >> wordLength;
    string word;
    cin >> word;

    for (int i = 1 ; i < wordLength ; i++){
        if (word[i-1] == word[i]) sum++;
    }

    cout << sum;

    return 0;
}