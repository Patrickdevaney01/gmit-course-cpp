#include <iostream>


using namespace std;

class Player{

    private:
        string forename;
        string surname;
        string position;
        int mobileNumber;

    public:



//declaration of functions
    Player(string forename,string surname,int mobileNumber);
    Player(string forename,string surname);
    void printPlayerInfo();
    string getForename();
    void setName(string forename,string surname);
    string getSurname();

};
