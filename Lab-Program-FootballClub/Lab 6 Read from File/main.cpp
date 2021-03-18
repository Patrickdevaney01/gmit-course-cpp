#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#include"football_club.h"
#include"player.h"


int main(){

    FootballClub Club;
    Club.setClubname("Man Utd");
    Club.setStripColour("Red and White");
    Club.setDistrict("England");

    Club.printClubInfo();

    cout<<"\nSquad Members\n"<<endl;

    int SquadSize = 35;
    int Teamsize = 15;

    Club.ReadSquadFromFile(SquadSize);

    cout<<"------------------------"<<endl;

    int SquadNumber = 5;

    cout << "Squad Player Number " << SquadNumber << " = : ";

    Club.PrintSquadPlayerInfo(SquadNumber);

}
