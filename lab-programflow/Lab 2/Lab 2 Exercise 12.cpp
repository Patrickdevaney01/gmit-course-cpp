#include <iostream>
#include "AreaOfCircle.h"
#include "FindOddNumbers.h"
using namespace std;



int main(){
 float radius;

            for(int i=0;i <= 10;i++){
                radius = i;
                cout <<"Radius = "<<radius<<endl;
                cout <<endl;
                cout << "Area of circle is "<<AreaOfCircle(radius)<<endl;
                cout << endl;
                FindOddNumbers(AreaOfCircle(radius));
                cout <<"-------------------------------" << endl;
            }

return 0;
}
