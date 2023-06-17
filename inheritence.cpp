#include <iostream>
using namespace std;

class employee
{
public:
    int code, salary;
    void getdata()
    {
        cout << "Code is " << code << endl;
        cout << "Salary is " << salary << endl;
    }
};
// Inheritence-
/*
Derived class syntax :=
class {derived class} : {visiblity mode} {base class}
{
    class members/methods/etc;
}
*/
class programmer : employee
{
public:
    int lang = 9;
    void setdata(int x, int y)
    {
        code = x;
        salary = y;
    }
    void data()
    {
        cout << "Code is " << code << endl;
        cout << "Salary is " << salary << endl;
    }
};
class manager : public employee
{
public:
    manager(){}
    int skill = 10;
    manager(int x, int y)
    {
        code = x;
        salary = y;
    }
};

int main()
{
    employee rohan;
    rohan.code = 1;
    rohan.salary = 2000;
    rohan.getdata();
    programmer sanskar;
    sanskar.setdata(2, 3000);
    sanskar.data();
    manager sambhav(3, 4000);
    sambhav.getdata();
    return 0;
}
/*Properties of inheritance -
  1. If visiblity is not mentioned then it is defaulted as private, i.e. public members of base
  class will become private members of derived class.
  2. If visiblity is mentioned as public, i.e. public members of base class will become private
  members of derived class.
  */