#include <iostream>   
using namespace std;         
int main ()         
{         
 int a[100][100],r,c;
 while(cin>>r>>c)
 {
	 for(int i=0;i<r;++i)
	 {
		 for(int j=0;j<c;++j)
		 {
			 cin>>a[i][j];
		 }
	 }
	 for(int j=0;j<c;++j)
	 {
		 for(int i=0;i<r;++i)
		 {
			 cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }

  
     
  
}