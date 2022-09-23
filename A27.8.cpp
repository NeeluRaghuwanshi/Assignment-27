//class matrix.....Overload the - (Unary) should negate the numbers stored in the object.
#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3],i,j;
public:
    void set()
    {
        cout<<"Enter 9 elements : "<<endl;
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                cin>>a[i][j];
            }

        }

    }
    void display()
    {
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                cout<<" "<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int operator-()
    {
         for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }

};
int main()
{
    Matrix m1;
    m1.set();
    cout<<endl<<endl<<"Matrix is :"<<endl;
    m1.display();
    -m1;
    cout<<endl<<endl<<"New matrix :"<<endl;
    m1.display();
    return 0;
}
