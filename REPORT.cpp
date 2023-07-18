#include <iostream>
using namespace std;

float x;

class REPORT
{

    int adno;
    char name[20];
    float arr[5];

public:
    int READINFO()
    {

        cout << "Enter ad no :";
        cin >> adno;

        cout << "Enter name :";
        cin >> name;

        cout << "Enter marks of maths science english ss gujarati :";
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    }

    float avg()
    {

        return (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
    }

    int DISPLAYINFO()
    {
        cout << "adno\tname\tmaths\tscience\tenglish\tss\tgujarati\taverage"
             << "\n";
        cout << adno << "\t" << name << "\t" << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t" << arr[3] << "\t" << arr[4] << "\t\t" << avg();
    }
};
int main()
{

    REPORT r;
    r.READINFO();
    x = r.avg();
    r.DISPLAYINFO();
}