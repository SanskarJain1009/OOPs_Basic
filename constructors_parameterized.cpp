#include<iostream>
using namespace std;

class complex{
    int a, b;
    public :
    complex(int x, int y);      //Parameterized constructor decleration.
                                //It contains some data types.
    void printnumber(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex(int x, int y)        //Parameterized constructor described.
{  
    a=x;
    b=y;
}
int main(){
    complex a(5,7);
    complex b = complex (5,3);
    a.printnumber();
    b.printnumber();
return 0;
}