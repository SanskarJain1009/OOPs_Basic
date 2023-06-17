#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
    float g, h;

public:
    void input()
    {
        float a, b;
        cout << "Enter the number - ";
        cin >> a;
        cout << "Enter the number - ";
        cin >> b;
        g = a;
        h = b;
    }
    float add()
    {
        return g + h;
    }
    float subtract()
    {
        return g - h;
    }
    float multiply()
    {
        return g * h;
    }
    float divide()
    {
        return g / h;
    }
};
class scicalculator
{
    float v;

public:
    void input()
    {
        float a;
        cout << "Enter the number - ";
        cin >> a;
        v = a;
    }
    float square()
    {
        return v * v;
    }
    float cube()
    {
        return v * v * v;
    }
    float sine()
    {
        return sin(v);
    }
    float cosine()
    {
        return cos(v);
    }
};
class hybrid : public scicalculator, public calculator
{
    int a;
public:
    void setvalue(int m)
    {
        a=m;
    }
    void input()
    {
        if (a>= 1 && a<=4)
        {
            calculator ::input();
        }
        if (a>=5 && a<=8)
        {
            scicalculator ::input();
        }
        else{cout<<"Invalid choice."<<endl;}
        
    }
};

int main()
{
    int q;
    cout << "1. For calculator." << endl;
    cout << "2. For Scicalculator." << endl;
    cout << "3. For Hybridcalculator." << endl;
    cout << "Enter the number for the calculator you want - ";
    cin >> q;
    if (q == 1)
    {
        calculator one;
        int r;
        cout << "1. for add." << endl
             << "2. for sub." << endl;
        cout << "3. for multiply." << endl
             << "4. for divide." << endl;
        cout << "Enter the operation you want - ";
        cin >> r;
        if (r == 1)
        {
            one.input();
            cout << one.add() << endl;
        }
        if (r == 2)
        {
            one.input();
            cout << one.subtract() << endl;
        }
        if (r == 3)
        {
            one.input();
            cout << one.multiply() << endl;
        }
        if (r == 4)
        {
            one.input();
            cout << one.divide() << endl;
        }
    }
    if (q == 2)
    {
        scicalculator two;
        int in;
        cout << "1. for square." << endl
             << "2. for cube." << endl;
        cout << "3. for sine." << endl
             << "4. for cosine." << endl;
        cout << "Enter the operation you want - ";
        cin >> in;
        if (in == 1)
        {
            two.input();
            cout << two.square() << endl;
        }
        if (in == 2)
        {
            two.input();
            cout << two.cube() << endl;
        }
        if (in == 3)
        {
            two.input();
            cout << two.sine() << endl;
        }
        if (in == 4)
        {
            two.input();
            cout << two.cosine() << endl;
        }
    }
    if (q == 3)
    {
        hybrid three;
        int data;
        cout << "1. for add." << endl
             << "2. for sub." << endl;
        cout << "3. for multiply." << endl
             << "4. for divide." << endl;
        cout << "5. for square." << endl
             << "6. for cube." << endl;
        cout << "7. for sine." << endl
             << "8. for cosine." << endl;
        cout << "Enter the operation you want - ";
        cin >> data;
        three.setvalue(data);
        if (data == 1)
        {
            three.input();
            cout << three.add() << endl;
        }
        if (data == 2)
        {
            three.input();
            cout << three.subtract() << endl;
        }
        if (data == 3)
        {
            three.input();
            cout << three.multiply() << endl;
        }
        if (data == 4)
        {
            three.input();
            cout << three.divide() << endl;
        }
        if (data == 5)
        {
            three.input();
            cout << three.square() << endl;
        }
        if (data == 6)
        {
            three.input();
            cout << three.cube() << endl;
        }
        if (data == 7)
        {
            three.input();
            cout << three.sine() << endl;
        }
        if (data == 8)
        {
            three.input();
            cout << three.cosine() << endl;
        }
    }
    return 0;
}
