#include <iostream>

using namespace std;

 float FahrenheitConversion(float fahrenheit){
 float celsius;
            celsius = (fahrenheit - 32) * 5;
            celsius = celsius/9;
            return celsius;
}

