#include <iostream>
using namespace std;
int main ()
{
    int num,ans;
	while(cin>>num)
    {
       ans=0;
       while(num>0)
	   {
	      ans=ans*10+num%10;
	      num/=10;
       }
	   cout<<ans<<endl;
     }
}