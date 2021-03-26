#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"



int main()
{
    FootballClub club;

    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");
    club.setManagerName("Patrick","Devaney");
    club.printInfo();

    string clubName = club.getClubname();
    clubName = club.getDistrict();
    cout << clubName<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, Playing;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>Playing)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<" "<<Playing<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            playerTemp.setPlaying(Playing);
            club.addPlayerToSquad(playerTemp, i);

            }

        //increments
        i =i+1;
    }
    infile.close();


    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    cout<<"\nSTARTING TEAM"<<endl;
    club.printTeam();
    cout<<"\nSUBSTITUTE BENCH"<<endl;
    club.printSubs();

    club.PrintManagerInfo();

    return 0;
}
