#include <iostream>
using namespace std;
class TEST
{

    int testcode, nocandidate, cenReq;
    char description[30];

public:
    int schedule()
    {
        cout << "Enter testcode :";
        cin >> testcode;

        cout << "Enter DEscription :";
        cin >> description;

        cout << "Enter no of candidate :";
        cin >> nocandidate;

        // cout<<"Enter center Required :";
        // cin>>cenReq;
    }

    int calcntr()
    {
        return (nocandidate / 100) + 1;
    }
    int DISPTEST()
    {
        cout << "TESTCODe\tDESCRIPTION\tNOCANDIDATE\tCENTRE REQUIRED"
             << "\n";
        cout << testcode << "\t\t" << description << "\t\t" << nocandidate << "\t\t" << calcntr();
    }
};
int main()
{
    TEST t;
    t.schedule();
    int x = t.calcntr();
    t.DISPTEST();
}