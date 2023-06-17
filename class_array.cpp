//C++ Objects Memory Allocation & using Arrays in Classes.

#include<iostream>
using namespace std;

class Dukaan
{
    private :
    int itemid[100];
    int itemprice[100];
    int a;

    public :
    void logic(void);        
    void input(void);
    void display(void);
};
void Dukaan :: logic(void)
        {
            a=0;
        }
void Dukaan :: input(void)
        {
            cout<<"Enter item id : ";
            cin>>itemid[a];
            cout<<"Enter item price : ";
            cin>>itemprice[a];
            a++;
        }
void Dukaan :: display(void)
        {   
            for(int i=0;i<a;i++)
            {
                cout<<i+1<<" item id is "<<itemid[i]<<" & price is "<<itemprice[i]<<endl;
            }
        }
int main()
{   
    Dukaan A;
    int a;
    cout<<"Enter the number the items you want to enter : ";
    cin>>a;
    cout<<endl;
    A.logic();
    for(int i=0;i<a;i++)
    {
    A.input();
    }
    A.display();    
return 0;
}