#include <iostream>

using namespace std;

int Largest(int num1,int num2) { //Function to take input of 2 numbers and return the largest

            if (num1 > num2){
            return num1;
            }
            else{
            return num2;
            }
}

int main(){
int num1, num2;

            cout << "Please enter the first number"<<endl;
            cin>>num1;
            cout << "Please enter the second number"<<endl;
            cin>>num2;

            Largest(num1,num2);
            cout << "The largest value is " << Largest(num1,num2);

    return 0;

}
