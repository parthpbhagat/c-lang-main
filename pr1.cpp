#include <iostream>
using namespace std;
class
    Timeconvarter // class name
{
private:
    int secound;
    int hours;
    int minutes;

public:
    Timeconvarter(int sec)
    {
        secound = sec;
        convert();
    }
    void convert()
    {

        //  time convart

        this->hours = secound / 3600;
        this->minutes = (secound % 3600) / 60;
        this->secound = secound % 60;
    }
    void display()
    {
        cout << "convarted time:" << this->hours << " " << this->minutes << " " << this->secound << endl;
    }
};

int main()
{
    int totalsecound;
    cout << "enter total secound: ";
    cin >> totalsecound;
    Timeconvarter time(totalsecound);
    time.display();
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int totalsecound;
//     cout << "enter time in secound : ";
//     cin >> totalsecound;

//     int hours = totalsecound / 3600;
//     int minutes = (totalsecound % 3600) / 60;
//     int secound = totalsecound % 60;

//     cout << "convarded time: " << "hh" << hours << "mm" << minutes << "ss" << secound;
//     return 0;
// }