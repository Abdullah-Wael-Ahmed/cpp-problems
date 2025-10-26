#include <iostream>
#include <cmath>
using namespace std;

int recipt(int vechileId, int vechileType, int entry, int exit);

/**
 * ! inputs:
 * @param vechileId: The Id of the vechile
 * @param vechileType: vechile type either (car, bus, etc)
 * @param entryTime: the entry time for the vechile
 * @param exitTime: the exit time of the vechile
 * 
 * ? process:
 * * first we collect the vechile basic info metioned above,
 * * secondly we pass this info to a function which does the following
 * * first it checks the vechile type and determines the hourly cost based on that
 * * vechile types and hourly rates should be determined by company policy
 * * then it calculates the stay time based on the entry and exit times
 * * it calculates the price and prints a recipt containing all this data
 * 
 * !output:
 * * a recipt containing vital info like total cost and vechile info
 */


int main(){

    while (true){
        int vechileId, vechileType, entryTime, exitTime;
        
        cout << "Enter Vechile ID: ";
        cin >> vechileId;
        cout << "Enter vechile type (1 for car, 2 for bus, 3 for van/truck, 4 for other types): ";
        cin >> vechileType;
        cout << "Enter Vechile entry hour: ";
        cin >> entryTime;
        cout << "Enter Vechile exit hour: ";
        cin >> exitTime;

        recipt(vechileId, vechileType, entryTime, exitTime);

        int action;

        cout << "Enter 1 to continue, 0 to exit" << endl;
        cin >> action;
        if (action != 1) break;

    }

    return 0;
}


int recipt(int vechileId, int vechileType, int entry, int exit){

    int prices[] = {10, 20, 30, 50};

    cout << "Vechile ID: " << vechileId << endl
    << "Entry Time: " << entry << endl
    << "Exit Time: " << exit << endl
    << "Total Stay: " << exit - entry << endl
    << "Total Price: " << abs(exit - entry) * prices[vechileType - 1] << "$" << endl;

    return 0;
}