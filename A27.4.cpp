//Create a class Time which contains: - Hours - Minutes - Seconds.
//operator overloading for the following:
//1. = = : To check whether two Times are the same or not.
//2. >> : To accept the time. 3. << : To display the time.
#include<iostream>
using namespace std;
class Time
{
private:
    int hr,mint,sec;
public:
    friend int operator>>(istream &in, Time &t)
    {   cout<<"Enter Hours : ";
        in>>t.hr;
        cout<<endl<<"Enter Minutes : ";
        in>>t.mint;
        cout<<endl<<"Enter seconds : ";
        in>>t.sec;

    }
    friend void operator<<(ostream &out, Time &t)
                {
                        out<<"\n Hours   :  "<<t.hr;
                        out<<"\n Minutes :  "<<t.mint;
                        out<<"\n Seconds :  "<<t.sec;
                }
    Time operator==(Time C)
    {
        if(hr==C.hr && mint==C.mint && sec==C.sec)
            cout<<endl<<endl<<"Times are same"<<endl;
        else
            cout<<endl<<"Times are not same"<<endl;
    }

};

int main()
{
    Time t1,t2;
    cout<<"Enter first time "<<endl;
    cout<<"----------------"<<endl;
    cin>>t1;
    cout<<t1;
    cout<<endl<<endl<<"Enter Second time"<<endl;
    cout<<"----------------"<<endl;
    cin>>t2;
    cout<<t2;
    t1==t2;
    return 0;

}
