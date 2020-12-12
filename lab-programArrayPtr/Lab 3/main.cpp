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
lbl1:
        cout << "Please enter Number " << i +1 << endl;
        cin >> usernum[i];
        if (usernum[i]<0 or usernum[i] >100){
        goto lbl1;
        }
    }

        cout << "---------------" <<endl;

    //Lab Task 3

    //Pass the contents of the array to the function
     PrintArray(usernum,arraysize);


        cout << "---------------" <<endl;

    //Lab Task 4
 int scalor;
        cout << "Please enter a Scalor Number"<<endl;
        cin >> scalor;
        cout << "---------------" <<endl;

    //Lab Task 5
    PrintArrayRef(scalor,&usernum[0],arraysize);
        cout << "---------------" <<endl;

    //Lab Task 7
    XmasTree();
        cout << "---------------" <<endl;
}

