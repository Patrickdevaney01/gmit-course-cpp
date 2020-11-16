#include <iostream>

using namespace std;

int main(){

int menu;

        cout << "Please press 1 for Question or press 2 for Answer" <<endl;
        cin >>menu;

        switch(menu){

            case 1:
                cout << "You have selected the Question" << endl;
                break;
            case 2:
                cout << "You have selected the Answer" << endl;
                break;
                }
}
