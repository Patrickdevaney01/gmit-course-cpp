#include <iostream>

using namespace std;

//Lab introduction
void LabInfo() {
 cout << "Patrick Devaney\n";
 cout << "Lab #3" << endl;
 }

//pass by Value and print numbers in the array and memory location of numbers
 void PrintArray(int arraynum[],int Size){

            for(int i = 0;i <Size; i++){
            cout << arraynum[i] <<", "<< &arraynum[i] <<endl;
            }

 }

 //pass Array by Reference and multiply by the scalor
 void PrintArrayRef(int scalor, int *j, int arraysize){
        for ( int i = 0 ; i <arraysize; ++i){
        cout<<"Array Number and Memory location = "<< *j * scalor<<", "<< &j[i] <<endl;
            j++ ;
        }
 }

//print 2d array in shape of xmas tree
void XmasTree(){
string array2d[8][11]={{"     X     "},{"    XXX    "},{"   XXXXX   "},
                        {"  XXXXXXX  "},{" XXXXXXXXX "},{"XXXXXXXXXXX"},
                                {"    XXX    "},{"    XXX    "}};

        for(int i=0;i < 8;++i){
            for(int j=0;j <11;++j){
             cout << array2d[i][j];
            }
        cout <<endl;
        }
        cout <<"HAPPY CHRISTMAS"<<endl;
}
