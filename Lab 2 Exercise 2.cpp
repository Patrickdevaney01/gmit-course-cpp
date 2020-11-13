#include <iostream>

using namespace std;

void Largest() { //Function to take input of 2 numbers and return the largest
            int num1,num2;

            cout << "Please enter the first number"<<endl;
            cin>>num1;
            cout << "Please enter the second number"<<endl;
            cin>>num2;

        if (num1 > num2){
            cout << "The largest value is " << num1;
        }
        else{
            cout << "The largest value is " << num2;
        }
}
int main(){

        Largest();
}
