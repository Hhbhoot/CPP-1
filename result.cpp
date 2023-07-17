#include<iostream>
using namespace std;
class student{
    
    int admno;
    char sname[20];
    float eng,math,science,total ;

   public:   
    float takedata(){
        cout<<"Enter admin no :";
         cin>>admno;
       
        cout<<"Enter name :";
        cin>>sname;
        cout<<"Enter english marks :";
        cin>>eng;
        cout<<"Enter maths marks :";
        cin>>math;
        cout<<"Enter science marks ;";
        cin>>science;

    }
    float ctotal(){
        total=eng + math + science ;
        return total;
    }
    float showdata(){
        cout<<"Adminno\tname\tenglish\tmaths\tscience\ttotal"<<"\n";
        cout<<admno<<"\t"<<sname<<"\t"<<eng<<"\t"<<math<<"\t"<<science<<"\t"<<total;

    }

};





int main(){

    student s;
    s.takedata();
   float total= s.ctotal();
    s.showdata();

}