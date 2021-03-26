#include <iostream>

using namespace std;

#include "player.h"

class FootballClub{
private:

    string clubname;
    string district;
    string stripColour;
    Player* Manager = new Player();
    // const static int , way to make a constant variable in a class
    const static int MAXSQUAD = 23;

    Player squad[MAXSQUAD];

public:

    //contructor
    FootballClub();
    FootballClub(string clubname, string district);

    string getClubname();
    string getDistrict();

    void setClubname(string clubname);
    void setDistrictname(string district);
    void printInfo();

    void setManagerName(string ForeName,string Surname);
    string getManagerName();
    void PrintManagerInfo();

    void addPlayerToSquad(Player tmp, int position);


    void printTeam();
    void printSubs();
    void printSquad();
};

