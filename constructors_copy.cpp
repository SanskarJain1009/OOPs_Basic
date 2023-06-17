#include<iostream>
using namespace std;
class number{
    int a;
    public :
    number(){}
    number(int x);
    void output()
    {
        cout<<a<<endl;
    }
    number(number &x)
    {   
        a=x.a;
        cout<<"Copy constructor Called."<<endl;
    }
};
number :: number(int x)
{a=x;}
int main(){
  number a, b, c;
  a=number(4);
  a.output();
  b=number(a);
  b.output();
  c=number(b);
  c.output(); 

return 0;
}