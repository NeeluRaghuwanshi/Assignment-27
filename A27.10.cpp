//Class Matrix { int a[3][3];Find out m3=m1+m2 (use operator overloading).
#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3],i,j;
public:
    void set()
    {
        cout<<endl<<"Enter 9 elements : "<<endl<<endl;
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
    int operator+(Matrix m)
    {
         int temp[3][3];
         for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                temp[i][j]=a[i][j]+m.a[i][j];
            }
        }
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                cout<<"  "<<temp[i][j]<<"  ";
            }
            cout<<endl;
        }

    }

};
int main()
{
    Matrix m1,m2,m3;
    m1.set();
    cout<<endl<<endl<<"Matrix 1 is :"<<endl;
    m1.display();
    m2.set();
    cout<<endl<<endl<<"Matrix 2 is :"<<endl;
    m2.display();
    cout<<endl<<endl<<"Addition of both matrix is :"<<endl;
    m1+m2;
    return 0;
}
