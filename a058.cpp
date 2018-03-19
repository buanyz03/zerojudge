#include <iostream>
using namespace std;
int main()
{
   int s[3]={0},n,x;
   cin>>n;
   while(n--)
   {
       cin>>x;
       s[x%3]+=1;
   }
   for(int i=0;i<3;++i)
   {
       cout<<s[i]<<" ";
   }
   cout<<endl;
}