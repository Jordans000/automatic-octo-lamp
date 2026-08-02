/*C++ Program to Illustrate Inheritance */
#include <iostream>
using namespace std;
class Base{
    protected:
        int data;
    public:
    Base(int val=0):data(val){}
    int getData(void) const {return data;}

};


class Derived :public Base {
    public:
        void changeData (int val)
    {
cout<<"Change of Derived ::data form"
  << data <<"->" <<val<< endl;
    data =val;
    }

};

int main(){

Base b;
Derived d;

d.changeData(20);

cout<< "Base Class data= "<< b.getData()<< endl;
cout <<"Derived Class data=" <<d.getData() << endl;



}

