#include"player.h"

//constructor
    Player::Player(string forename,string surname){
        this-> forename = forename;
        this-> surname = surname;
    }

//onstructor
    Player::Player(string forename,string surname,int mobileNumber){
        this-> forename = forename;
        this-> surname = surname;
        this-> mobileNumber = mobileNumber;
    }
//method/funtion
    void Player::printPlayerInfo(){
        cout<<forename<<" "<<surname<<endl;
    }
//getter funtion
    string Player::getForename(){
    return forename;

    }
//getter funtion
    string Player::getSurname(){
    return surname;

    }
//setter function
   void Player::setName(string forename,string surname){
        this-> forename = forename;
        this-> surname = surname;
    }
