#include <iostream>
using namespace std;
class book
{

    int bookno;
    char bookname[20];
    float price;
    int copies, totalcost;

public:
    book()
    {

        cout << "Enter book no :";
        cin >> bookno;

        cout << "Enter book name :";
        cin >> bookname;

        cout << "enter price :";
        cin >> price;

        cout << "enter number of copies want to buy :";
        cin >> copies;

        totalcost = price * copies;
    }

    int display()
    {
        cout << "bookno\tbook name\tprice\tcopies\ttotalcost" << endl;
        cout << bookno << "\t" << bookname << "\t\t" << price << "\t" << copies << "\t" << totalcost;
    }
};
int main()
{
    book b;
    b.display();
}