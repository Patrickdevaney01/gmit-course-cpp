#include <iostream>

using namespace std;

void NumberCheck() { //Function to check the user inputs a number between 1 and 100

    int userinput;
    cout << "Please enter a number between 1 and 100" <<endl;
    cin >> userinput;

    if (userinput > 0 && userinput <= 100){
        cout << "You may continue"<<endl;
    }
    else{
        cout << "You Fool, You did not enter a number between 1 and 100" <<endl;
    }
}
int main(){

        NumberCheck();
}
