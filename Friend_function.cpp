#include <iostream>
using namespace std;
class large
{
    int p, q;

public:
    void setdata(int a, int b)
    {
       cout<<"Enter a :";
       cin>>p;

       cout<<"Enter b :";
       cin>>q;
    }

    void getdata()
    {

        cout << "Number are :" << p << "\t" << q << endl;
    }
    friend large find(large);
};

large find(large x)
{
    large t;
    t.p = x.p;
    t.q = x.q;

    if (t.p > t.q)
    {
        cout << t.p << " is the largest";
    }
    else
    {
        cout << t.q << " is the largest";
    }
}

int main()
{   int a,b;
    large x;
    x.setdata(a,b);
    x.getdata();

    find(x);
}