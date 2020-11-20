#include <iostream>
using namespace std;

void FindEvenNumbers(int check){

                    if(check % 2 == 0){
                    cout <<"Even Number = "<< check << endl;
                    }

}

int main(){
int even = 9;
int range = 100;

                    for(int num = 0 ;num <= range; num++){
                            FindEvenNumbers(num);
                    }
    return 0;
}
