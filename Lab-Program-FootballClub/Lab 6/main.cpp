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


    int SquadSize = 2;
    Player player[SquadSize];

    //Club.readfilelinebyline1();

    player[1].setPlayerName("Wayne Rooney");
    player[1].setPosition("Forward");

    player[2].setPlayerName("Ryan Giggs");
    player[2].setPosition("Mid-Fielder");


    for(int i = 1;i <= SquadSize;++i){
    Club.addSquadPlayer(player[i],i);
    }

    cout << "\nFirst Team Players\n"<<endl;

    for(int i = 1;i <= 2;++i){
    Club.FirstTeamPlayers(player[i],i);
    }

}
