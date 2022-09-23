//Class mystring { char str [100]; Public: // methods };
//Overload operator “!” to reverse the case of each alphabet in the string.
#include<iostream>
using namespace std;
class Mystring
{
    char str[100];
public:
    void set()
    {
        cout<<"Enter a string : "<<endl<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!()
    {
        for(int i=0;str[i];i++)
        {
          if(str[i]>='a' && str[i]<='z')
                 str[i]=str[i]-32;
         else if(str[i]>='A' && str[i]<='Z')
                 str[i]=str[i]+32;
        }
    }

};
int main()
{
    Mystring m;
    m.set();
    !m;
    cout<<endl<<"Changed string : "<<endl<<endl;
    m.display();
    cout<<endl;
    return 0;
}
