 //C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    int set(int x,int y)
    {
        a=x; b=y;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
    {
        Complex temp;
        temp.a=X.a+Y.a;
        temp.b=X.b+Y.b;
        return temp;
    }

int main()
{
    Complex c1,c2,c3;
    c1.set(4,5);
    c2.set(2,3);
    c3=c1+c2;
    c1.show();
    c2.show();
    cout<<"-----"<<endl;
    c3.show();
    return 0;
}
