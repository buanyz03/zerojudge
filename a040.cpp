#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int len(int n)
{
	int l=0;
	while(n>0)
	{
		++l;
		n=n/10;
	}
	return l;
}
int main()
{
	int a,b,l,x,sum;
	vector <int> ans;
    while(cin>>a>>b)
	{
      ans.clear();
      for(int i=a;i<=b;i++)
	  {
          x=i;
          l=len(x);
		  sum=0;
		  while(x>0)
		  {
			 sum+=(int)pow(x%10,l);
			 x/=10;
		  }
		  if(sum==i)
		  {
            ans.push_back(i);
		  }
      }
	  if(ans.size()==0)
	  {
		  cout<<"none";
	  }
	  else
      {
          cout<<ans[0];
          for(int i=1;i<ans.size();++i)
          {
              cout<<" "<<ans[i];
          }
      }
	  cout<<endl;
	}
}