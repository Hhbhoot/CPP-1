#include <iostream>
using namespace std;
class student
{
    int adno;
    char name[20];
    float eng, math, guj;
    float total,pr;

public:
    student()
    {

        cout << "Enter ad no :";
        cin >> adno;

        cout << "Enter name :";
        cin >> name;

        cout << "Enter marks of eng math guj :";
        cin >> eng >> math >> guj;

        total = eng + math + guj;
        pr=total/3;
    }
    int display()
    {

        cout << "ADMNO\tName\tEnglish\tMaths\tGujarati\ttotal\tpercentage:" << endl;
        cout << adno << "\t" << name << "\t" << eng << "\t" << math << "\t" << guj << "\t\t" << total<<"\t"<<pr;
    }
};
int main()
{

    student t;
    t.display();
}