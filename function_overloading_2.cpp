#include<iostream>
using namespace std;
class volume{
    public:

    void shape(int l){
        cout<<"volume of cube :"<<l*l*l<<endl;
    }
    void shape(int r ,int h){
        cout<<"volume of sphere :"<<(4*3.14*r*r*h)/3<<endl;
    }
    void shape(double r,double h){
        cout<<"volume of cylinders :"<<(3.114*r*r*h)<<endl;
    }

};
int main(){
    volume v;
    v.shape(5);
    v.shape(5,7);
    v.shape(2.3,5.0);
}
