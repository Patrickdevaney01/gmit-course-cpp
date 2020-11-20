#include <iostream>
using namespace std;

void FindEvenNumbers(int check){

                    if(check % 2 == 1){
                    cout <<"The Odd Numbers Between your two inputs = "<< check << endl;
                    }

}

int main(){
int num1;
int num2;

            cout << "Please enter the 1st number " <<endl;
            cin >> num1;
            cout << "Please enter the 2nd number " <<endl;
            cin >> num2;

                    for(;num1 <= num2; num1++){
                            FindEvenNumbers(num1);
                    }
    return 0;
}
