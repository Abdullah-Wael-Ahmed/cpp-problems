#include <iostream>
using namespace std;

int determineWinners(int stage, int index = 1);

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0; i < numberOfTestCases; i++)
    {
        int numberOfAthletes;
        cin >> numberOfAthletes;
        cout << determineWinners(numberOfAthletes, 0) << endl;
    }
    return 0;
}

int determineWinners(int stage, int index)
{
    int contestent1, contestent2;
    if (stage == 1)
    {
            
        contestent1 = (2 * index) + 1;
        contestent2 = contestent1 + 1;
    }
    else
    {
        contestent1 = determineWinners(stage - 1, index * 2);
        contestent2 = determineWinners(stage - 1, ((index * 2) + 1));
    }
    return ((contestent1 + contestent2) % 2 == 0 ? contestent2 : contestent1);
}