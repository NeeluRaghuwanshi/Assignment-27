// C++ class fraction class fraction { long numerator; long denominator; Public: fraction (long n=0, long d=0); }
//Overload the following operators as member or friend:
//a) Unary ++ (pre and post both)
//b) Overload as friend functions: operators << and >>
#include<iostream>
using namespace std;
class Fraction
{
    private:
        long num,deno;
    public:
        Fraction(long int n=0, long int d=0)
        {
                num=n;
                deno=d;
        }
        friend void operator>>(istream &in, Fraction &f)
        {
                cout<<endl<<"Numerator:  ";
                in>>f.num;
                cout<<endl<<"Denominator:  ";
                in>>f.deno;
        }
        friend void operator<<(ostream &out, Fraction &f)
        {
                out<<f.num<<"/"<<f.deno;
        }
        Fraction operator++()
        {
                ++num;
                ++deno;
                return (*this);
        }
        Fraction operator++(int s)
        {
                Fraction temp;
                temp.num=num++;
                temp.deno=deno++;
                return temp;
        }
};
int main()
{
        Fraction f1,f2;
        cout<<endl<<"f1 :  ";
        cout<<f1;
        cout<<endl<<"f2 :  ";
        cout<<f2;
        cout<<endl<<endl<<"Enter 1st Fraction Value \n";
        cin>>f1;
        cout<<endl<<"f1++ :  ";
        f1++;
        cout<<f1;
        cout<<endl<<"++f1 :  ";
        ++f1;
        cout<<f1;
        cout<<"\n\n Enter 2nd Fraction Value \n";
        cin>>f2;
        f2=++f1;
        cout<<endl<<"f2 = ++f1";
        cout<<endl<<"f1 :   ";
        cout<<f1;
        cout<<endl<<"f2 :   ";
        cout<<f2;
        f2=f1++;
        cout<<endl<<endl<<"f2 = f1++";
        cout<<endl<<"f1 :  ";
        cout<<f1;
        cout<<endl<<"f2 :  ";
        cout<<f2;
        return 0;
}
