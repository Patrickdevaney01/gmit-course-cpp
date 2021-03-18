#include"football_club.h"

//constructor to set all variables blank
    FootballClub::FootballClub(){
        this-> clubname = (" ");
        this-> district = (" ");
        this-> stripColour = (" ");
}

        //Print funtion

    void FootballClub::printClubInfo(){
        cout<<"Club Name : "<<clubname<<endl;
        cout<<"Strip Colour : "<<stripColour<<endl;
        cout<<"District : "<<district<<endl;
    }

        //setter functions

   void FootballClub::setClubname(string clubname){
        this-> clubname = clubname;
    }

    void FootballClub::setDistrict(string district){
        this-> district = district;
    }

    void FootballClub::setStripColour(string stripColour){
        this-> stripColour = stripColour;
    }

        // Function to add players to squad
    void FootballClub::addSquadPlayer(Player tempSquad,int squadnumber){
        squad[squadnumber].setPlayerName(tempSquad.getPlayername());
        squad[squadnumber].setPosition(tempSquad.getPosition());
        squad[squadnumber].printPlayerInfo();
    }

        // Function to add players to Team
    void FootballClub::FirstTeamPlayers(Player tempTeam,int Teamnumber){
        team[Teamnumber].setPlayerName(tempTeam.getPlayername());
        team[Teamnumber].setPosition(tempTeam.getPosition());
        team[Teamnumber].printPlayerInfo();
    }

    void FootballClub::PrintSquadPlayerInfo(int SquadNumber){
        squad[SquadNumber].printPlayerInfo();
    }

        //getter funtions

    string FootballClub::getClubname(){
        return clubname;
    }

    string FootballClub::getDistrict(){
        return district;
    }

    string FootballClub::getStripColour(){
        return stripColour;
    }


    //Function to read players from a txt file and add to the squad
    void FootballClub::ReadSquadFromFile(int Squadsize){

    Player player[Squadsize];

      fstream file;
        file.open("Club_Members.txt",ios::in);

        string a,b,c;

    for(int j = 1;j < Squadsize;++j){

                while(file >> a >> b >> c){

                player[j].setPlayerName(a + " " + b);
                player[j].setPosition(c);
                addSquadPlayer(player[j],j);
                j++;

            }
        }
file.close();
    }




