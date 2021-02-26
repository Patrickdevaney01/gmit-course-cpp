#include"football_club.h"

//constructor
    FootballClub::FootballClub(string clubname,string district){
        this-> clubname = clubname;
        this-> district = district;
    }
//onstructor
    FootballClub::FootballClub(string clubname){
        this-> clubname = clubname;
    }
//method/funtion
    void FootballClub::printClubInfo(){
        cout<<clubname<<endl;
    }
//getter funtion
    string FootballClub::getClubname(){
    return clubname;

    }
//setter function
   void FootballClub::setClubname(string clubname){
        this-> clubname = clubname;
    }

