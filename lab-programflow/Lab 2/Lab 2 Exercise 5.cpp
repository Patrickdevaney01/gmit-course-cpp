#include <iostream>

using namespace std;

float AreaOfCircle(float radius){

    float area,pi = 3.14159;

            area  = radius * radius * pi;
            return area;
}

int main(){

    float radius;

            cout<<"Please enter the radius of the circle"<<endl;
            cin >>radius;
            cout << "Area of circle is "<<AreaOfCircle(radius)<<endl;

return 0;
}
