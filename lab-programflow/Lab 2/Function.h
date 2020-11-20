#include <iostream>
#include <ctime>
using namespace std;

//fuction to print the what's below to the screen
void LabInfo() {
            cout << "Patrick Devaney\n";
            cout << "Lab #2" << endl;
}

//Function to return the area of a circle when given the radius
float AreaOfCircle(float radius){

    float area,pi = 3.14159;

            area  = radius * radius * pi;
            return area;
}

//Function to return the area of a rectangle when given the length and width
float AreaOfRectangle(float length,float width){

            float area = length * width;
            return area;
}

//Function to convert Celsius into Fahrenheit
 float CelsiusConversion(float celsius){
 float fahrenheit;
            fahrenheit = (celsius/5) * 9;
            fahrenheit = fahrenheit + 32;
            return fahrenheit;
 }

 //Function to convert Fahrenheit into Celsius
 float FahrenheitConversion(float fahrenheit){
 float celsius;
            celsius = (fahrenheit - 32) * 5;
            celsius = celsius/9;
            return celsius;
}

//Function to find the even numbers
void FindEvenNumbers(int check){

                    if(check % 2 == 1){
                    cout <<"The Odd Numbers Between your two inputs = "<< check << endl;
                    }

}

//Function to find the odd numbers
void FindOddNumbers(int check){

                    if(check % 2 == 1){
                    cout <<"The Odd Numbers = "<< check << endl;
                    }

}

//Function to take input of 2 numbers and return the largest
void Largest(int num1,int num2) {

            if (num1 > num2){
            cout << "The largest value is " << num1<<endl;
            }
            else if(num1 < num2){
            cout << "The largest value is " << num2 <<endl;
            }
            else if(num1 == num2){
                cout <<"The two numbers are equal"<<endl;
            }

}

//Function to check the user inputs a number between 1 and 100
void NumberCheck(int userinput) {

    if (userinput > 0 && userinput <= 100){
        cout << "You may continue"<<endl;
    }
    else{
        cout << "You Fool, You did not enter a number between 1 and 100" <<endl;
    }
}

//Function to print out 6 Random numbers
void RandomNumbers(){
    srand(time(NULL));

int num[6];
                for(int i = 0;i < 6;i++){
                num[i] = rand() % 100;
                cout << "Random number "<< i + 1 << " = "<< num[i]<<endl;
                }

}

//Function to check the temp and humidity
void TempAndHumidityCheck(float temp,float humidity){

            if(temp >= 95){
                cout <<"WARNING TEMPERATURE TO HIGH"<<endl;
            }
            if(humidity >= 90){
                cout <<"WARNING HUMIDITY TO HIGH"<<endl;
            }
}

