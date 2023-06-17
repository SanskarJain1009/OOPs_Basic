#include<iostream>
#include<string>
using namespace std;

class classroom{
    static int a;
    int logic[100];
    char b[100][100];
    int roll[100];
    public :
    int j;
    int i; 
    void input();
    void output();
};
int classroom :: a;
void classroom :: input(){

    cout<<"Enter the number of students you want to enter : ";
    cin>>j;
    for(i=0;i<j;i++){
    cout<<"Enter the first character of the name of student "<<a+1<<" : ";
    cin>>b[i][100];
    cout<<"Enter the roll number of student "<<a+1<<" : ";
    cin>>roll[i];
    a++;
    }
}
void classroom :: output(){
    for(i=0;i<j;i++){
    cout<<"Name of student with roll number "<<roll[i]<<" is "<<b[i][100]<<endl;
    }
}

int main(){

    classroom three;
    three.input();
    cout<<endl;
    three.output();
    return 0;
}