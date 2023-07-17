#include<iostream>
using namespace std;
class batsman{

    int bcode;
    char bname[20];
    int innings,notout,runs;

    public:

    int readdata(){

        cout<<"Enter bcode ;";
        cin>>bcode;

        cout<<"Enter name :";
        cin>>bname;

        cout<<"Enter innings :";
        cin>>innings;

        cout<<"Enter No of times batsman remain notout :";
        cin>>notout;

        cout<<"Enter total scored runs : ";
        cin>>runs;

    }
    int calcavg(){
        int avg=runs/(innings-notout);

        return avg;
    }
    int dispalydata(){
        cout<<"Bcode\tBname\tinnings\tnotout\truns\tbatavg"<<"\n";
        cout<<bcode<<"\t"<<bname<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<calcavg();
    }


};

int main(){

    batsman a;
    a.readdata();
    a.calcavg();
     a.dispalydata();
}