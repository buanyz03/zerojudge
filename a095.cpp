#include<iostream>
using namespace std;
int main()
{
  int m,n;
  while(cin>>m>>n)
  {
      if(m!=n)
      {
          ++n;
      }
      cout<<n<<endl;
  }