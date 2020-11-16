#include <iostream>

using namespace std;

void TempAndHumidityCheck(float temp,float humidity){

            if(temp >= 95){
                cout <<"WARNING TEMPERATURE TO HIGH"<<endl;
            }
            if(humidity >= 90){
                cout <<"WARNING HUMIDITY TO HIGH"<<endl;
            }
}


