#include<iostream>
using namespace std;
class batsman{

    int bcode;
    char bname[20];
    int innings ,notout,runs,batavg;

    public:

    batsman(){
        cout<<"enter bcode :";
        cin>>bcode;

        cout<<"Enter name :";
        cin>>bname;

        cout<<"Enter innings played : ";
        cin>>innings;

        cout<<"Enter no of times remain notout :";
        cin>>notout;

        cout<<"Enter runs scored :";
        cin>>runs;
 
       batavg=runs/(innings-notout);


    }

    int display(){

        cout<<"Bcode\tname\tinnings\tnotout\truns\taverage"<<endl;
        cout<<bcode<<"\t"<<bname<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg;

    }

};
int main(){

    batsman b;
    b.display();

}
