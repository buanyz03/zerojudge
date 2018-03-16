#include <iostream>

using namespace std;

int main()
{
    bool right_ans;
    int sudo[9][9];
    while(cin>>sudo[0][0])
    {
        for(int i=1;i<9;++i)
        {
            cin>>sudo[0][i];
        }
        for(int i=1;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                cin>>sudo[i][j];
            }
        }
        right_ans=true;
        for(int i=0;i<9 && right_ans;++i) // row check
        {
            int sum=0;
            for(int j=0;j<9;++j)
            {
                sum+=sudo[i][j];
            }
            if(sum!=45)
            {
                right_ans=false;
            }
        }
        for(int i=0;i<9 && right_ans;++i) // column check
        {
            int sum=0;
            for(int j=0;j<9;++j)
            {
                sum+=sudo[j][i];
            }
            if(sum!=45)
            {
                right_ans=false;
            }
        }
        for(int c=0;c<9 && right_ans;c+=3) //block check
        {
            for(int r=0;r<9 && right_ans;r+=3)
            {
                int sum=0;
                for(int i=c;i<c+3;++i)
                {
                    for(int j=r;j<r+3;++j)
                    {
                        sum+=sudo[i][j];
                    }
                }
                if(sum!=45)
                {
                    right_ans=false;
                }
            }
        }
		cout<<(right_ans?"yes":"no")<<endl;
    }
}