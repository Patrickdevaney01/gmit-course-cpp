#include <iostream>

using namespace std;

float AreaOfRectangle(float length,float width){

            float area = length * width;
            return area;
}

int main(){

    float length, width;

            cout<<"Please enter the Length of the Rectangle"<<endl;
            cin >>length;
            cout<<"Please enter the Width of the Rectangle"<<endl;
            cin >>width;
            cout << "Area of Rectangle is "<<AreaOfRectangle(length,width)<<endl;

return 0;
}
