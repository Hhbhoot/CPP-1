#include <iostream>
using namespace std;
class number
{
    int real, img;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void getdata()
    {
        cout << "The number is " << real << " + " << img << "i" << endl;
    }

    number operator++()
    {
        number x;
        x.real = ++real;
        x.img = ++img;
        return x;
    }
    number operator--(int)
    {
        number y;
        y.real = real--;
        y.img = img--;
        return y;
    }
};
int main()
{

    number t, q, r, s;
    t.setdata(5, 1);
    t.getdata();

    q = ++t;

    q.getdata();

    q--;
    r = q;

    r.getdata();
}
