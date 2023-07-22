#include <iostream>
using namespace std;
class book
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
    book operator*(book &n)
    {
        book t;
        t.l = l + n.l;

        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
};
int main()
{
    book a, b, c;
    a.setdata(2, 2, 2);
    cout << "Book 1 volume :" << a.getdata() << endl;
    b.setdata(7, 7, 7);
    cout << "Book 2 volumke :" << b.getdata() << endl;

    c = a * b;
    cout << "Book 3 volume :" << c.getdata() << endl;
}