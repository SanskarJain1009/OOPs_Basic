#include<iostream>
using namespace std;

class sim{
    int a, b, c;
    public :
    sim(int x, int y, int z);
    void printdata(){
        cout<<"a is "<<a<<" "<<"b is "<<b<<" "<<"c is "<<c<<" "<<endl;
    }

};
sim :: sim(int x=0, int y=0, int z=0)  //Default Argument.
{
    a=x;
    b=y;
    c=z;
}


int main(){
    sim a;
    a=sim(7,8,9);
    sim b=sim(1,2,4);
    sim c=sim(2,6);
    sim d=sim(3);
    sim e=sim();
    a.printdata();
    b.printdata();
    c.printdata();
    d.printdata();
    e.printdata();
return 0;
}