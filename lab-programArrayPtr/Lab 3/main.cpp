#include <iostream>
#include "function.h"

using namespace std;

int main(){

    //Lab Task 1
    LabInfo(); //calls introduction function
        cout << "---------------" <<endl;

    //Lab Task 2
const int arraysize = 6;
 int usernum[arraysize];

        for (int i = 0;i < arraysize; ++i){

        cout << "Please enter Number " << i +1 << endl;
lbl1:
        cin >> usernum[i];
    //Checks if the user has entered the correct value between 0 and 100
        if (usernum[i]<0 or usernum[i] >100){
                cout << "You entered a number above 100 or below 0." <<endl;
                cout << "Please re-enter the a correct number" << endl;
        goto lbl1;
        }
    }
        cout << "---------------" <<endl;

    //Lab Task 3
    //Pass the contents of the array to the function and print value and Memory
     PrintArray(usernum,arraysize);
        cout << "---------------" <<endl;

    //Lab Task 4
    int scalor;
        cout << "Please enter a Scalor Number"<<endl;
        cin >> scalor;
        cout << "---------------" <<endl;

    //Lab Task 5
    //pass the value in scalor and the reference of the first number in the array and the array size
    PrintArrayRef(scalor,&usernum[0],arraysize);
        cout << "Inputs multiplied by the Scalor Input" <<endl;
        cout << endl;

    //Pass the contents of the array to the function and print value and Memory
    PrintArray(usernum,arraysize);
        cout << "---------------" <<endl;

    //Lab Task 7
    // Calls the function Xmas Tree
    XmasTree();
        cout << "---------------" <<endl;
}

