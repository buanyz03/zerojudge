#include <iostream>
#include <string>
using namespace std;

int main ()
{
      int num;
      string s;
      char ch;
      while(cin>>num)
      {
         s="";
         while(num>0)
         {
             ch=num%2+'0';
             num=num/2;
             s=ch+s;
         }
          cout<<s<<endl;
      }
}