//a class Complex with appropriate instance variables and member functions.
// Define following operators in the class: +  , -  , *  , ==.
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
    void showadd()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    void showminus()
    {
        cout<<a<<"-"<<b<<"i"<<endl;
    }
    void showproduct()
    {
        cout<<a<<"*"<<b<<"i"<<endl;
    }
     void showequal()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
     Complex operator*(Complex C)
    {
        Complex temp;
        temp.a=a*C.a;
        temp.b=b*C.b;
        return temp;
    }
    Complex operator==(Complex C)
    {
         a=C.a;
         b=C.b;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.set(4,5);
    c2.set(2,3);
    c3=c1+c2;  //c3=c1.operator+(c2)
    c1.showadd();
    c2.showadd();
    cout<<"-----"<<endl;
    c3.showadd();
    cout<<endl<<endl;
    c3=c1-c2;
    c1.showminus();
    c2.showminus();
    cout<<"-----"<<endl;
    c3.showminus();
    cout<<endl<<endl;
    c3=c1*c2;
    c1.showproduct();
    c2.showproduct();
    cout<<"-----"<<endl;
    c3.showproduct();
    cout<<endl<<endl;
    c1==c2;
    c1.showequal();

    return 0;
}
