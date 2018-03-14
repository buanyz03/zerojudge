#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
	int a,b,c,r,q;
	while(cin>>a>>b>>c)
	{
	    r=(b*b)-(4*a*c);
		if(r>0)
		{
          q=(int)sqrt((double)r);
          cout<<"Two different roots x1="<<(-b+q)/(2*a)<<" , x2="<<(-b-q)/(2*a)<<endl;
		}
		else if(r==0)
        {
          cout<<"Two same roots x="<<-b/(2*a)<<endl;
        }
		else
        {
            cout<<"No real root"<<endl;
        }
    }
}