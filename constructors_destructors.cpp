#include<iostream>
using namespace std;

int count=0;
class number{
    public :
    number()
    {   
        count++;
        cout<<"Constructor number "<<count<<" initiated."<<endl;
    }
    ~number()
    {   
        cout<<"Constructor number "<<count<<" initiated."<<endl;
        count--;
    }
};

int main(){
    cout<<"Main Program."<<endl;
    cout<<"One object created."<<endl;
    number n1;
    {
        cout<<"Two more objects created."<<endl;
        number n2,n3;
        cout<<"Object Program Exit"<<endl;
    }
    cout<<"Main program exit"<<endl;
return 0;
}