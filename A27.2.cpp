// C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set(int x, int y)
    {
        a=x; b=y;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};
int main()
{
    Complex c1,c2;
    c1.set(4,5);
    c1.show();
    c2= -c1;
    c2.show();
    return 0;

}
