#pragma once

#include <iostream>


using namespace std;

class Player{

    private:
        string fullname;
        string position;
        int mobileNumber;

    public:

//declaration of functions

    Player();

    void printPlayerInfo();

    void setPlayerName(string fullname);
    void setPosition(string position);
    void setMobileNumber(int mobileNumber);

    string getPlayername();
    string getPosition();
    int    getMobileNumber();
};
