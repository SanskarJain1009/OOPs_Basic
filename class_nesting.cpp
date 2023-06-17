#include<iostream>
#include<string>
using namespace std;

class binary
{   private :
    void check();
    string s;
    public :
    void input(void);
    void output(void);
    void complimentary();
};

void binary :: input(void)
{
    cout<<"Enter your number : "<<endl;
    cin>>s;
}

void binary :: check()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"Incorrect Binary Input."<<endl;
                exit(0);
            }
    }
}

void binary :: complimentary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void binary :: output(void)
{
    cout<<"Your number is : "<<s<<endl;
    check();    //-->Nesting of function check in function output.
}

int main()
{
    binary b;
    b.input();
    // b.check(); It is a private element. It cannot be accesed like this.
    //class method must be used to access check function.
    b.output();
    b.complimentary();
    cout<<"After Complementing."<<endl;
    b.output();
    return 0;
}