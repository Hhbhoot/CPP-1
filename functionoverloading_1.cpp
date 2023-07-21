#include <iostream>
using namespace std;
class area
{
public:
    void shape(int l)
    {
        cout << "Area of square :" << l * l << endl;
    }
    void shape(int l, int b)
    {
        cout << "Area of rectangle :" << l * b << endl;
    }
    void shape(double b, double h)
    {
        cout << "Area of Triangle :" << (b * h) / 2 << endl;
    }
};
int main()
{
    area a;
    a.shape(5);
    a.shape(5, 7);
    a.shape(2.3, 5.0);
}
