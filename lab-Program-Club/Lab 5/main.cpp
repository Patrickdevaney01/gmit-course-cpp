#include <iostream>

using namespace std;

#include"football_club.h"
#include"player.h"


int main(){
//setting using constructors
    FootballClub club1("Man Utd");
    Player person1("Eric","Cantona");

//prints using print functions
    club1.printClubInfo();
    person1.printPlayerInfo();

    cout<<"*********************"<<endl;

//setting using setter functions
    club1.setClubname("Arsenal");
    person1.setName("Marc","Overmars");

//prints using getter funstions
    cout<<club1.getClubname()<<endl;
    cout<<person1.getForename()<<" "<<person1.getSurname()<<endl;

}
