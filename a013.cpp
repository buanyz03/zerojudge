#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
string R[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int N[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
int secrch_index(string s)
{
	for(int i=0;i<13;i+=2)
	{
		if(s==R[i])
		{
			return i;
		}
	}
}
int R_to_N(string s)
{
    int num;
    num=N[secrch_index(string(1,s[0]))];
    for(int i=1;i<s.size();++i)
    {
        num+=N[secrch_index(string(1,s[i]))];
        if(N[secrch_index(string(1,s[i]))]>N[secrch_index(string(1,s[i-1]))])
        {
            num-=N[secrch_index(string(1,s[i-1]))]*2;
        }
    }
    return num;
}
int main()
{
    string R1,R2,ans;
    int n;
    while(cin>>R1)
    {
        if(R1=="#")
        {
            break;
        }
        cin>>R2;
        n=abs(R_to_N(R1)-R_to_N(R2));
        if(n==0)
        {
           ans="ZERO";
        }
		else
		{
			ans="";
			for(int i=0;i<13;++i)
			{
               int k=n/N[i];
               n%=N[i];
			   while(k>0)
			   {
	     		  ans+=R[i];
	     		  --k;
			   }
			}
		}

        cout<<ans<<endl;
     }
}