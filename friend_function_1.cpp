#include <iostream>
using namespace std;
class rect
{

    int l, b;

public:
    void setdata(int a, int c)
    {

        cout << "Enter length" << endl;
        cin >> l;

        cout << "Enter base :" << endl;
        cin >> b;
    }

    void getdata()
    {

        cout << "Area is :" << l * b << endl;
    }

    friend rect area(rect, rect);
};

rect area(rect x, rect y)
{

    rect t;
    t.l = x.l + y.l;
    t.b = x.b + y.b;

    return t;
}

int main()
{
    int a, b;
    rect r, p, q;
    r.setdata(a, b);
    r.getdata();

    p.setdata(a, b);
    p.getdata();

    q = area(r, p);
    q.getdata();
}