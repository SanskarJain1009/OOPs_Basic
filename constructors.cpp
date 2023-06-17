#include<iostream>
using namespace std;

class complex {
    int a,b;
    public :
    complex(void);  //constructor decleration.
                    //Constructor is used to invoke the value of the class. setnumber karne ki zaroorat nhi padhti.
                    //direct access mil jaata hai.

    void printnumber(){
        cout<<"Complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex(void)        //This is a default constructor.
                                //It does not take any paramenters.
{  
    a=10;
    b=4;
}

int main(){
    complex c;
    c.printnumber();
return 0;
}
//Characters of Constructors.

//1.It should be declared in public section of class.
//2.They are automotically invoked whenever the the object is created.
//3.They cannot return values and do not have return types.
//4.It can have default arguments.
//5.We cannot refer to their address.
 