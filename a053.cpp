#include<iostream>
using namespace std;
int main()
{
	int n,sum,judge[3]={10,10,20},point[3]={6,2,1};
	while(cin>>n)
	{
      sum=0;
	  for(int i=0;i<3;++i)
	  {
		  if(n<=judge[i])
		  {
			  sum+=n*point[i];
			  break;
		  }
		  else
		  {
			  sum+=judge[i]*point[i];
			  n-=judge[i];
		  }
	  }
	  if(sum>100)
	  {
		  sum=100;
	  }
	  cout<<sum<<endl;
	}
}