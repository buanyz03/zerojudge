#include <iostream>   
using namespace std;   
int main()   
{ 
	int M,D,S;    
	while(cin>>M>>D)
	{
		S=(M*2+D)%3;
		switch(S)
		{
			case 2:
			  cout<<"大吉";
			break;
			case 1:
			  cout<<"吉";
			break;
			default:
			  cout<<"普通";
		}
		cout<<endl;
	}
}