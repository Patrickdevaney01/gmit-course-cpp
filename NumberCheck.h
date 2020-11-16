#include <iostream>

using namespace std;

void NumberCheck(int userinput) { //Function to check the user inputs a number between 1 and 100

    if (userinput > 0 && userinput <= 100){
        cout << "You may continue"<<endl;
    }
    else{
        cout << "You Fool, You did not enter a number between 1 and 100" <<endl;
    }
}

