#include <iostream>

using namespace std;
#include "Function.h"


int main(){

//Exercise 1 Call fuction for Lab Info
    LabInfo();

//Exercise 2 Program to take in 2 numbers and print out the Largest
int num1, num2;
            cout <<endl <<"Find The Largest number of two numbers"<<endl;
            cout << "Please enter the first number"<<endl;
            cin>>num1;
            cout << "Please enter the second number"<<endl;
            cin>>num2;
            Largest(num1,num2);

  //Exercise 3 Program to check if the user inputs a number between 1 and 100
int userinput;
            cout <<endl <<"Check to make sure you input a number between 1 and 100"<<endl;
            cout << "Please enter a number between 1 and 100" <<endl;
            cin >> userinput;
            NumberCheck(userinput);

//Exercise 4 Program to select Question or Answer from a Menu
int menu;
            cout <<endl << "Menu Selection"<<endl;
lbl1:
            cout << "Please press 1 for Question or press 2 for Answer" <<endl;
            cin >>menu;
            if(menu > 2 or menu < 1){
                goto lbl1;
            }
        switch(menu){
            case 1:
            cout << "You have selected the Question" << endl;
                break;
            case 2:
            cout << "You have selected the Answer" << endl;
                break;
            }

//Exercise 5 Program to print the area of a Circle when given the radius
float radius;
            cout <<endl<<"Find the Area of a circle"<<endl;
            cout<<"Please enter the radius of the circle"<<endl;
            cin >>radius;
            cout << "Area of circle is "<<AreaOfCircle(radius)<<endl;

//Exercise 6 Program to print the area of a rectangle when given the length and width
float length, width;
            cout <<endl<<"Find the Area of a Rectangle"<<endl;
            cout<<"Please enter the Length of the Rectangle"<<endl;
            cin >>length;
            cout<<"Please enter the Width of the Rectangle"<<endl;
            cin >>width;
            cout << "Area of Rectangle is "<<AreaOfRectangle(length,width)<<endl;

//Exercise 7 Program to check if the Temp and Humidty are too high
int temp, humidity;
            cout <<endl<<"Temperature and Humidity check"<<endl;
            cout<<"Please enter the Temperature"<<endl;
            cin >>temp;
            cout<<"Please enter the humidity"<<endl;
            cin >>humidity;
            TempAndHumidityCheck(temp, humidity);

//Exercise 8 Program to print the range of area's of a circle when the radius is 0 - 120
float radius1;
            cout <<endl<<"Find the Area of a circle with Radius from 1 to 120"<<endl;
        for(int i=0;i <= 120;i++){
            radius1 = i;
            cout <<"Radius = "<<radius1<<endl;
            cout << "Area of circle is "<<AreaOfCircle(radius1)<<endl;
            cout << "---------------------------------------------"<<endl;
            }

//Exercise 9 Program to convert celsius and fahrenheit
int selection;
 float fahrenheit, celsius;
            cout <<endl<<"Temperature Conversion"<<endl;
lbl2:
            cout << "Press 1 to convert Celsius to Fahrenheit"<<endl;
            cout << "Press 2 to convert Fahrenheit to Celsius"<<endl;
            cin >> selection;
        if(selection > 2 or selection < 1){
            goto lbl2;
}
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

//Exercise 10 Program to Print all the even numbers from 0 - 100
int range = 100;
            cout <<endl<<"Find all the even numbers from 0 to 100"<<endl;
        for(int num = 0 ;num <= range; num++){
            FindEvenNumbers(num);
            }

//Exercise 11 Program to print all the odd numbers in between the user inputs
int usernum1;
int usernum2;
            cout <<endl<<"Find all odd numbers between 2 user inputs"<<endl;
            cout << "Please enter the 1st number " <<endl;
            cin >> usernum1;
            cout << "Please enter the 2nd number " <<endl;
            cin >> usernum2;
                    for(;usernum1 <= usernum2; usernum1++){
                            FindOddNumbers(usernum1);
                    }

//Exercise 12 Program to print all the odd radius results from previous eercise
                cout <<endl<<"Find all the odd radius results from above"<<endl;
            for(int i=0;i <= 120;i++){
                AreaOfCircle(i);
                FindOddNumbers(AreaOfCircle(i));
            }

//Exercise 13 Program to Print 6 Random numbers
                cout <<endl<<"Print 6 Random Numbers"<<endl;
                RandomNumbers();

//Exercise 14 program to call 3 functions
                cout <<endl<<"Print Numbers from 5 to 9"<<endl;
                PrintNumber();
                cout <<endl<<"Print sum of numbers 1 to 20"<<endl;
                SumOfNumbers();
                cout <<endl<<"Average of all grades entered"<<endl;
                Grades();

    return 0;
}
