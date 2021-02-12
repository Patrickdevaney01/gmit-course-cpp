#include <iostream>
#include "LabInfo.h"
#include "LabInfo.cpp"

using namespace std;

    void setdate(int D,int M,int Y){
        Day = D;
        Month = M;
        Year = Y;
    }

    int getdate() {
        return Day,Month,Year;
    }
        void Printinfo(){
            cout <<Name<<endl;
            cout <<LabId<<endl;
            cout <<Day<<":"<<Month<<":"<<Year;
    }

