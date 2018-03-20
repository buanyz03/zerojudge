#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main ()
{
	string s;
	while(cin>>s)
	{
	    for(int i=0;i<6;++i)
	    {
	      cout<<abs(s[i+1]-s[i]);
	    }
	    cout<<endl;
	}
}