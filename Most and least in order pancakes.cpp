#include <iostream>

using namespace std;

int main()
{
    int numberswap, n;

        cout << "How many people are having pancakes" <<'\t';
        cin >> n ;
        cout <<endl;
            if(n <= 0){
                cout <<"NO PANCAKES WERE EATEN" <<endl;
                return 0;
            }

    int person[n];
    int pancakes[n]; //declares an array size n
    int pancakesB[n];

    for (int i = 1;i <= n; i++){            //loops for the amount entered in n
            person[i] = i;
jump1:
        cout << "please enter the number of pancakes person "<< person[i] <<" ate for breakfast" <<'\t';
            cin >> pancakes[i];             //asks the user for an input this loops ten times and stores values in the array

            if(pancakes[i] < 0){
                cout <<"ERROR PLEASE ENTER A VALID QUANTITY" <<endl;
goto jump1; //continues to loop until the user enters a number greater then zero
        }
            pancakesB[i] = pancakes[i];       //copies the array into an extra array

    } //loop to swap all the numbers around and sorts them from higest to lowest
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
			if(pancakes[i] < pancakes[j]){   //checks 2 numbers stored in the array to see which is highest
				numberswap   = pancakes[i];  //if the number in array i is less then j it puts the number in i anto numberswap
				pancakes[i] = pancakes[j];   //puts the number in j into i
                pancakes[j] = numberswap;     // puts the number in numberswap into j
			}
        }
    }
        cout <<endl;
   //loop to match the person number to the re-ordered list
    for(int i=1;i<=n;i++){                    //compares the numbers in the original array to the re ordered array
        for(int j=1;j<=n;j++){
            if (pancakes[i] == pancakesB[j]){//compares the values in the first set of numbers entered with the re-ordered numbers
                    person[i] = j;            //when it reaches the correct value it store the step number in person
                    pancakesB[j] = -100;      //changes the number in the array to delete it
                    break;                    //breaks from the loop once it finds the correct value
                }
            }
        cout << "Person " << person[i] << " ate " << pancakes[i] << " pancakes" << endl;//prints out the two arrays
    }
        cout <<endl <<"Person "<<person[1] << " you fat bastard you fat bastard you ate all the pancakes" <<endl;
        cout <<"Person " <<person[n] << " you need to eat more " <<endl;
    return 0;
}
