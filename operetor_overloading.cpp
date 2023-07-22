#include <iostream>
using namespace std;
class box
{

    int l, w, h;

public:
    void setdata(int a, int b, int c)
    {

        l = a;
        w = b;
        h = c;
    }

    int getdata()
    {
        return l * w * h;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
    box operator-(box &e)
    {
        box y;
        y.l = l - e.l;
        y.w = w - e.w;
        y.h = h - e.h;

        return y;
    }
};
int main()
{

    box a, b, c, d;
    a.setdata(7, 7, 7);
    cout << "Volume of box 1 :" << a.getdata() << endl;
    b.setdata(5, 5, 5);
    cout << "Volume of box 2 :" << b.getdata() << endl;

    c = a + b;
    cout << "Volume of box 3 :" << c.getdata() << endl;

    d = c- b;

    cout << "Volume of box 4 :" << d.getdata() << endl;
}