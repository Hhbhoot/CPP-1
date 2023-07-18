#include <iostream>
using namespace std;
int n, m, o;
class BOOK
{
    int bookno;
    char booktitle[30];
    float price;

public:
    int input()
    {
        cout << "Enter book no :";
        cin >> bookno;

        cout << "Enter book title :";
        cin >> booktitle;

        cout << "Enter book price :";
        cin >> price;
    }
    int purchase()
    {

        cout << "How many copies do yo want to buy :";
        cin >> o;
        return o;
    }
    int totalcost()
    {
        return n * price;
    }
    int display()
    {
        cout << "BOOK NO\tBOOK TITLE\tPRICE\tCOPIES\tTOTALCOST"
             << "\n";
        cout << bookno << "\t" << booktitle << "\t\t" << price << "\t" << n << "\t" << m;
    }
};
int main()
{

    BOOK b;

    b.input();
    n = b.purchase();
    m = b.totalcost();
    b.display();
}
