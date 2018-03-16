#include <iostream>   
using namespace std;            
int main ()            
{            
	int s[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33},a,sum;         
	char ch;
	while(cin>>ch)
	{ 
	    sum=0;
        cin>>a;
        sum=(s[ch-'A']/10)+((s[ch-'A']%10)*9)+a%10;
		a=a/10;
		for(int i=1;i<9;++i)
		{ 
		    sum=((a%10)*i)+sum;
		    a=a/10;
		}
		if((sum%10)==0)
		{
		    cout<<"real"<<endl;
        }
		else 
		{
		    cout<<"fake"<<endl;
        }
    }
}