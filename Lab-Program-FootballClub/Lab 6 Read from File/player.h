#pragma once

#include <iostream>


using namespace std;

class Player{

    private:
        string fullname;
        string position;
        int mobileNumber;
        int SquadNumber;

    public:

//declaration of functions

    Player();

    void printPlayerInfo();

    void setPlayerName(string fullname);
    void setPosition(string position);
    void setMobileNumber(int mobileNumber);
    void setPlayerSquadNumber(int SquadNumber);

    string getPlayername();
    string getPosition();
    int    getMobileNumber();
};
