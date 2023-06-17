// Virtual class helps in resolving ambiguity in multiple classes who have same base class.
#include <iostream>
using namespace std;
class employee
{
public:
    int salary, code;
};
class engineer : public virtual employee
{
};
class manager : public virtual employee
{
};
class CEO : public virtual engineer, public virtual manager
{   public :
        void setdata(int a, int b)
    {
        code = a;
        salary = b;
    }
    void display()
    {
        cout << "Code is " << code << " & Salary is " << salary << endl;
    }
};
int main()
{
    CEO sanskar;
    sanskar.setdata(2, 2000);
    sanskar.display();
}