#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public :
    void input(void);
    void output(void);
    void check();
    void complimentary();
};

void binary :: input(void)
{
    cout<<"Enter your number : "<<endl;
    cin>>s;
}
void binary :: output(void)
{
    cout<<"Your number is : "<<s<<endl;
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

int main()
{
    binary b;
    b.input();
    b.check();
    b.output();
    b.complimentary();
    cout<<"After Complementing."<<endl;
    b.output();
    return 0;
}