#include <iostream>
#include <string>
using namespace std;


// inputs :
// number of Teaching staff members
// hours to papers ratio for each rank
// teachingstaff name
// teachingstaff papers
// teachingstaff academic hours

// process :
// ask for number of teaching staff members
// loop and collect the info of each staff member
// calculate the rank and add the status of the staff member to a string that we will use later to display all info
// after adding clear all info variables for the next staff member

// output : 
// display the string that we added all the results to

int main(){

    int numberOfStaffMembers, ratioForProfessor, ratioForAssociate, ratioForLecturer;
    string result;
    cout << "Academic Rank Calculator" << endl;
    cout << "Enter the Academic hours to papers ratio for each of the following academic titles:" << endl;
    cout << "Professor: ";
    cin >> ratioForProfessor;
    
    cout << "Associate: ";
    cin >> ratioForAssociate;
    
    cout << "Lecturer: ";
    cin >> ratioForLecturer;

    cout << "Enter number of staff members: ";
    cin >> numberOfStaffMembers;

    for (int i = 0 ; i < numberOfStaffMembers ; i++){
        string staffName;
        int noPapers, noHours;
        float ratio;
        cout << "Staff " << i+1 <<": \n"; 
        cout << "Name: ";
        cin >> staffName;
        cout << "Number of Papers: ";
        cin >> noPapers;
        cout << "Number if academic hours: ";
        cin >> noHours;
        ratio = noHours / noPapers;
        if (ratio <= ratioForProfessor){

            result+= "Dr. " + staffName + ": Professor\n";
            
        } else if (ratio <= ratioForAssociate){
            
            result+= "Dr. " + staffName + ": Associate\n";
            
        } else if (ratio <= ratioForLecturer){
            
            result+= "Dr. " + staffName + ": Lecturer\n";
            
        } else{
            
            result+= "Eng. " + staffName + ": Assistant\n";

        }

    }

    cout << result;

    return 0;
}