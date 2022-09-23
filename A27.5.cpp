//Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    Numbers()
    {
        x=0; y=0; z=0;
    }
    void set()
    {
        cout<<"Enter 3 numbers : ";
        cin>>x>>y>>z;
    }
    void get()
    {
        cout<<x<<endl<<y<<endl<<z;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x= -x;
        temp.y= -y;
        temp.z= -z;
        return temp;
    }
};
int main()
{
    Numbers n1,n2;
    n1.set();
    n2= -n1;
    n2.get();
    return 0;
}
