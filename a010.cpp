#include <iostream>   
using namespace std;      
int main ()      
{      
    int num;   
    while(cin>>num)   
    {     
        for(int i=2;num>1;++i)   
        {      
            if(num%i==0)   
            {
			  int k;
              for(k=0;num%i==0;++k)   
              {    
                  num/=i;   
              }
			  cout<<i;
			  if(k>1)
			  {
				cout<<"^"<<k;   
			  }				  
              if(num>1)
			  {
				cout<<" * ";   
			  }  
            }   
        }
	  cout<<endl;
    }   
           
}