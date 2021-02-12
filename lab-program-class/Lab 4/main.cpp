#include <iostream>

using namespace std;

#include "LabInfo.h"
/*
class LabInfo{

   public:
        string Name, LabId;

   private:
        int Day, Month ,Year;

   public:
        void setdate(int D,int M,int Y){
            Day = D;
            Month = M;
            Year = Y;
    }

    void Printinfo(){
        cout <<Name<<endl;
        cout <<LabId<<endl;
        cout <<Day<<":"<<Month<<":"<<Year;
    }
};
*/
int main(){

  LabInfo Lab4;
  Lab4.Name = "Patrick Devaney";
  Lab4.LabId = "Lab 4";
  Lab4.setdate(12,02,2021);
//Lab4.Day = 12;
//Lab4.Month = 02;
//Lab4.Year = 2021;
  Lab4.Printinfo();

  return 0;
}
