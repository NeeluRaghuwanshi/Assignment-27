//e a class CString to represent a string.
// a) Overload the + operator to concatenate two strings. b) == to compare 2 strings.
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    char str[20];
public:
     void setstring()
        {
           cout<<"Enter String  :   ";
           cin>>str;
        }
        void display()
        {
           cout<<str;
        }
        CString operator+(CString s)
        {
                CString temp;
                strcat(str , s.str);
                strcpy(temp.str,str);
                return temp;
        }
       int operator==(CString &s);

};
int CString::operator==(CString &s)
        {
            for(int i=0; str[i]; i++)
               {
                for(int j=0; s.str[j]; j++)
                      {
                        if(str[i]==s.str[j])
                          return 0;
                        else
                          return 1;
                      }
               }
        }
int main()
{
    CString s1,s2,s3;
    int flag=0;
    s1.setstring();
    s2.setstring();
    s3=s1+s2;
    cout<<endl<<"Added string is : ";
    s3.display();
    cout<<endl<<endl;
    flag=s1==s2;
        if(flag == 0)
          cout<<"Both Same"<<endl;
        else
          cout<<"Not Same";

    return 0;

}
