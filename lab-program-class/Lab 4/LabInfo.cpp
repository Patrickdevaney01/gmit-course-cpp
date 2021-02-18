#include "LabInfo.h"


     void LabInfo::setdate(int D,int M,int Y){
            Day = D;
            Month = M;
            Year = Y;
    }

    void LabInfo::Printinfo(){
        cout <<Name<<endl;
        cout <<LabId<<endl;
        cout <<setw(2)<< setfill('0')<<Day<<":"<<setw(2)<<setfill('0')<<Month<<":"<<setw(4)<<Year;
    }
