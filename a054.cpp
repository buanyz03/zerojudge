#include <iostream>
using namespace std;
int main ()
{
	int s[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33},n,sum,check;
	char ch;
	while(cin>>n)
	{
          check=n%10;
          sum=0;
          n=n/10;
          for(int i=1;i<=8;++i)
		  {
            sum=((n%10)*i)+sum;
		    n=n/10;
		  }
		  for(int i=0;i<26;++i)
		  {
               sum+=(s[i]%10)*9+s[i]/10;
               if((check==0 && sum%10==0) || (sum%10==10-check))
               {
                   ch=i+'A';
                   cout<<ch;
               }
               sum-=(s[i]%10)*9+s[i]/10;
		  }
		  cout<<endl;
    }
}