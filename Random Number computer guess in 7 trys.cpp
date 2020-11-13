#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random, guess, Max, Min;
    char Yes, y, Y;

    cout << "Welcome to my Guessing Game"<<endl;
    cout << "You Pick a Number and The Computer will Try Guess it"<<endl;

lbl1:
    int attempts = 0;

    cout << "\nPlease Enter Lower Limit " <<endl;
    cin >> Min;

    cout << "Please Enter Higher Limit " <<endl;
    cin >> Max;
lbl2:
    cout <<"Pick a number between "<< Min << " and "<< Max <<endl;
    cin >> guess;

    if(guess > Max or guess < Min){
            cout << "\nYOU NEED TO PICK A NUMBER IN BETWEEN YOUR LIMITS"<<endl;
            cout << endl;
            goto lbl2;
    }

            random = Max/2;

    do{
            if(random > guess){
                cout <<endl << "Computer Guessed " << random <<endl;
                attempts ++;
                Max = random;
                random = (Min + Max)/2;
                cout << "Guess is too High" << endl;
                cout << "Attempt " << attempts<<endl;
            }

            if(random < guess){
                cout <<endl << "Computer Guessed " << random <<endl;
                attempts ++;
                Min = random;
                random = (Min + Max)/2;
                cout << "Guess is too Low" << endl;
                cout << "Attempt " << attempts<<endl;
            }
    }
            while(random != guess);

    attempts = attempts + 1;
    cout << endl;
    cout << "Computer Guessed " << random <<endl;
    cout << endl << "Computer has correctly guessed your number " <<endl;
    cout << "It only took the Computer "<< attempts << " attempts to guess your number" <<endl;
    cout << "\nGAME OVER" << endl;
    cout << "\nDO YOU WANT TO PLAY ANOTHER GAME Y/N"<<endl;
    cin >> Yes;

    if(Yes == 'y' or Yes == 'Y'){
    goto lbl1;
    }
    else
    return 0;
}
/*random number using rand is not really random as it just picks a number from a set sequence
  every time this program runs it will give the same numbers in the same order each time
  we use the instruction srand() and the time will use the computers clock to set the start
  sequence at a different  point each time it runs, we only need to call this once not in a loop
*/
