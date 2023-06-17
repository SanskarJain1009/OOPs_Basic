#include<iostream>
using namespace std;

class employee
{
    public : 
    int id;
    virtual void getdata(){
        cout<<"Enter the id-"<<endl;
        cin>>id;
    }
    virtual void display(){
        cout<<id<<endl;
    }
};
class teacher : public employee
{
    public :
    int course;
    void getdata(){
        cout<<"Enter the course number for teacher -"<<endl;
        cin>>course;
    }
    void display()
    {
        cout<<"Teacher class display invoked."<<endl;
        cout<<course<<endl;
    }
};

class manager : public employee
{
    public :
    int role ;
    void getdata(){
        cout<<"Enter the role number for manager- "<<endl;
        cin>>role;
    }
    void display()
    {   
        cout<<"Manager class display invoked."<<endl;
        cout<<role<<endl;
    }
}; 
int main(){

    teacher a;
    manager b;
    a.getdata();
    b.getdata();
    a.display();
    b.display();

    cout<<endl<<endl<<endl<<endl;
    employee *c[2];
    c[0]=&a;
    c[1]=&b;

    c[0]->display();
    c[1]->display();
return 0;
}