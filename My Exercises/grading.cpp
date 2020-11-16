#include <iostream>

using namespace std;

int main()
{
    int score;

    cout <<"Please enter your Grade (0 - 100)"<<endl;
    cin >> score;

    if(score == 100)
        cout << "Congratulations you got a perfect score"<<endl;
    else if(score >= 90 & score < 100)
        cout << "Congralulations you got an A "<<endl;
    else if(score >= 80 & score < 90)
        cout << "Congralulations you got an B "<<endl;
    else if(score >= 70 & score < 80)
        cout << "Congralulations you got an C "<<endl;
    else if(score >= 60 & score < 70)
        cout << "Congralulations you got an D "<<endl;
    else if(score < 60)
        cout << "Unfortunately you got an F "<<endl;

    return 0;
}
