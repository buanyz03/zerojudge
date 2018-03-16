#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    { 
        int a,b;
        for(a=0,b=s.size()-1;b<a;++a,--b)
        {
            if (s[a]!=s[b]) 
            {
                break;
            }
        }
        cout<<(s[a]==s[b]?"yes":"no")<<endl;
    }
}