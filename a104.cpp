#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n,s[1001];
	while(cin>>n)
	{
	   for(int i=0;i<n;++i)
	   {
	       cin>>s[i];
	   }
	   sort(s,s+n);
	   for(int i=0;i<n;++i)
	   {
	       cout<<s[i]<<" ";
	   }
	   cout<<endl;
	}
}