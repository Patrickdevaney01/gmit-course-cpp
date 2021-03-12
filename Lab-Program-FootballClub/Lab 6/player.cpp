#include"player.h"

//Constructor to set all variables to blank
    Player::Player(){
        this-> fullname = " ";
        this-> position = " ";
        this-> mobileNumber = 000;
        }

        //print funtion
    void Player::printPlayerInfo(){
        cout<<fullname<<" --- "<<position<<endl;
    }

        //setter functions
   void Player::setPlayerName(string fullname){
        this-> fullname = fullname;
    }

    void Player::setPosition(string position){
        this-> position = position;
    }

    void Player::setMobileNumber(int mobileNumber){
        this-> mobileNumber = mobileNumber;
    }

        //getter funtions
    string Player::getPlayername(){
    return fullname;
    }

    string Player::getPosition(){
    return position;
    }

    int Player::getMobileNumber(){
    return mobileNumber;
    }

