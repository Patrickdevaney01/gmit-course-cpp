#include <iostream>
#include <ctime>

using namespace std;

void RandomNumbers(){
    srand(time(NULL));

int num[6];
                for(int i = 0;i < 6;i++){
                num[i] = rand() % 100;
                cout << "random numbers = "<< num[i]<<endl;
                }

}


int main(){

        RandomNumbers();

}
