#include <iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
       c=0;
       for(int i=a;i<=b;++i)
       {
           if(isprime(i) && i!=1)
           {
               c++;
           }
       }
       cout<<c<<endl;
    }
    return 0;
}