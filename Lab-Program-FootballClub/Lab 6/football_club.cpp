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
    void FootballClub::addSquadPlayer(Player tempSquad,int squadnumber){
        squad[squadnumber].setPlayerName(tempSquad.getPlayername());
        squad[squadnumber].setPosition(tempSquad.getPosition());
        squad[squadnumber].printPlayerInfo();
    }

    void FootballClub::FirstTeamPlayers(Player tempTeam,int Teamnumber){
        team[Teamnumber].setPlayerName(tempTeam.getPlayername());
        team[Teamnumber].setPosition(tempTeam.getPosition());
        team[Teamnumber].printPlayerInfo();
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

