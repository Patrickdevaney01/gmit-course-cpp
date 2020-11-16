#include <iostream>

using namespace std;

 float CelsiusConversion(float celsius){
 float fahrenheit;
            fahrenheit = (celsius/5) * 9;
            fahrenheit = fahrenheit + 32;
            return fahrenheit;
 }
 float FahrenheitConversion(float fahrenheit){
 float celsius;
            celsius = (fahrenheit - 32) * 5;
            celsius = celsius/9;
            return celsius;
}

int main(){

 int selection;
 float fahrenheit, celsius;

        cout << "Press 1 to convert Celsius to Fahrenheit"<<endl;
        cout << "Press 2 to convert Fahrenheit to Celsius"<<endl;
        cin >> selection;

        if(selection == 1){
            cout << "Please enter a Celsius value to convert to Fahrenheit"<<endl;
            cin >> celsius;
            cout << celsius << " Degrees Celsius = "<< CelsiusConversion(celsius) <<" Degrees Fahrenheit"<<endl;
        }
        if(selection == 2){
            cout << "Please enter a Fahrenheit value to convert to Celsius"<<endl;
            cin >> fahrenheit;
            cout << fahrenheit << " Degrees Fahrenheit = "<< FahrenheitConversion(fahrenheit) <<" Degrees celsius"<<endl;
        }

        return 0;
}
