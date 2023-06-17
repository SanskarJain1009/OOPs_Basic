#include<iostream>
using namespace std;

class set{
    int a, b;
    public :
    set(int i, int j) : a(i), b(j){
        cout<<"Value of a : "<<a<<endl;
        cout<<"Value of b : "<<b<<endl;
    }
};
int main(){
    set(4,6);    
return 0;
}