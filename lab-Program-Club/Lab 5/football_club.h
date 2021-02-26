#include <iostream>

using namespace std;

class FootballClub{

    private:
        string clubname;
        string district;
        string stripColour;

    public:
//declaration of functions
    FootballClub(string clubname);
    FootballClub(string clubname,string district);
    void setClubname(string clubname);
    string getClubname();
    void printClubInfo();
};
