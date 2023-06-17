#include<iostream>
using namespace std;

class employee{
    private : int a, b, c;
    public : int d, e;
    void classinput(int a,int b,int c);
    void printdata()
    {
        cout<<"Value of a : "<<a<<endl;
        cout<<"Value of b : "<<b<<endl;
        cout<<"Value of c : "<<c<<endl;
        cout<<"Value of d : "<<d<<endl;
        cout<<"Value of e : "<<e<<endl;
    }

};

void employee :: classinput(int a1, int a2, int a3){
a=a1;
b=a2;
c=a3;
}

int main(){
    int a,b,c,d,e;
    cout<<"Enter the value for a : "<<endl;
    cin>>a;
    cout<<"Enter the value for b : "<<endl;
    cin>>b;
    cout<<"Enter the value for c : "<<endl;
    cin>>c;
    
    employee Sanskar;
    Sanskar.e=34;
    Sanskar.d=23;
    Sanskar.classinput(a,b,c);
    Sanskar.printdata();
    cout<<"This is after inputting values for a, b, c, d, e."<<endl;
    Sanskar.d=23;
    Sanskar.e=34;
    // Sanskar.a=324; -->Private class cannot by accessed like this.
    // Private class can only be entered by function mentioned in class. Here it is classinput funciton.
    Sanskar.e=454;
    Sanskar.d=786;
    Sanskar.classinput(11,12,13);
    Sanskar.printdata();
    cout<<"Public classes values are changed in the main program."<<endl;
    cout<<"Private class values need to be modified by using functions(we have to access private class before modifiying them."<<endl;
    
return 0;
}