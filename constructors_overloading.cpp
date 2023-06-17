#include<iostream>
using namespace std;

class complex{
    int a, b;
    public :
    complex();
    complex(int x, int y);
    complex(int x);
    void printnumber(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex(){
    a=0;
    b=0;
}
complex :: complex(int x, int y){
    a=x;
    b=y;
}
complex :: complex(int x){
    a=x;
    b=0;
}
int main(){
    complex a,b,c;
    a=complex();
    b=complex(5);
    c=complex(5,3);
    a.printnumber();
    b.printnumber();
    c.printnumber();
    
return 0;
}