#include <iostream>
using namespace std;
int main()
{
  bool sq[1001];
  int T,left,right,sum,c=0;
  cin>>T;
  for(int i=1;i<1001;++i)
  {
      sq[i]=false;
  }
  for(int i=1;i*i<1001;++i)
  {
    sq[i*i]=true;
  }
  while(T--)
  {
    sum=0;
    c++;
    cin>>left>>right;
    for(int i=left;i<=right;++i)
    {
        if(sq[i])
        {
            sum+=i;
        }
    }
    cout<<"Case "<<c<<": "<<sum<<endl;
  }
}