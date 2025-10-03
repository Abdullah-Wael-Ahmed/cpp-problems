#include <iostream>
#include <string>
using namespace std;

// https://codeforces.com/problemset/problem/71/A

string returnAppreviation(string word);

int main() {

    int numberOfTests;

    cin >> numberOfTests;

    for (int i = 0 ; i < numberOfTests ; i++){
        string word;
        cin >> word;
        cout << returnAppreviation(word) << endl;
    }
    
    return 0;
}

string returnAppreviation(string word){

    int lengthOfWord = word.length();

    if (lengthOfWord <= 10) return word;

    else return word[0] + to_string(lengthOfWord-2) + word[lengthOfWord-1];

} 