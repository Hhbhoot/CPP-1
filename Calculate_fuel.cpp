#include <iostream>
using namespace std;
class fuel
{
    int flightnumber;
    char destination[50];
    float distance, fuel;

public:
    int feedinfo()
    {
        cout << "Enter flight number :";
        cin >> flightnumber;

        cout << "Enter destinstion :";
        cin >> destination;

        cout << "Enter distance :";
        cin >> distance;
    }
    int calcfuel()
    {
        if (distance <= 1000)
            return 500;
        else if (distance > 1000 && distance <= 2000)
            return 1100;
        else
            return 2200;
    }

    int showinfo()
    {
        cout << "flight number\tdestination\tdistance\tFuel"
             << "\n";
        cout << flightnumber << "\t\t" << destination << "\t\t" << distance << "\t\t" << calcfuel();
    }
};
int main()
{

    fuel f;
    f.feedinfo();
    f.calcfuel();
    f.showinfo();
}