#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#include"player.h"

class FootballClub{

    private:
        string clubname;
        string district;
        string stripColour;
        Player squad[40];
        Player team[15];

    public:
//declaration of functions

    FootballClub();

    void setDistrict(string district);
    void setClubname(string clubname);
    void setStripColour(string stripColour);
    void addSquadPlayer(Player tempSquad,int squadnumber);
    void FirstTeamPlayers(Player tempTeam,int Teamnumber);

    void readfilelinebyline1();

    void printClubInfo();

    string getClubname();
    string getDistrict();
    string getStripColour();
};
