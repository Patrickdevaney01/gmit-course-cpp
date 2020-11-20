#include <iostream>
#include "AreaOfCircle.h"
using namespace std;


int main(){
 float radius;

            for(int i=0;i <= 120;i++){
                radius = i;
                cout <<"Radius = "<<radius<<endl;
                cout << "Area of circle is "<<AreaOfCircle(radius)<<endl;
            }

return 0;
}
