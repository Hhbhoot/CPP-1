#include <iostream>
using namespace std;
class Area
{

public: // constructor overriding
    Area(double r)
    {

        cout << "Area of circle :" << 3.14 * r * r << endl;
    }

    Area(int l)
    {
        cout << "Area of squre is :" << l * l << endl;
    }

    Area(int l, int b)
    {
        cout << "Area of rectangle :" << l * b << endl;
    }
    Area(double b, double h)
    {

        cout << "Area of triangle :" << (b * h) / 2 << endl;
    }
    ~Area()
    {
        cout << "Destructor is called..." << endl;
    }
};
main()
{
    Area t(5), a(3.0), b(3, 5), c(3.0, 5.3);
}
