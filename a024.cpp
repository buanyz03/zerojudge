#include <iostream>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
       cout<<GCD(x,y)<<endl;
    }
    return 0;
}