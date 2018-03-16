#include <iostream>
#include <cctype>
#include <stack>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
int t_num(string s)
{
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
	   sum=sum*10+s[i]-'0';
    }
    return sum;
}
int f(int a,int b,char ch)
{
    if(ch=='+')
    {
        return a+b;
    }
    else if(ch=='-')
    {
        return a-b;
    }
    else if(ch=='*')
    {
        return a*b;
    }
    else if(ch=='/')
    {
        return a/b;
    }
    else
    {
        return a%b;
    }
}
int main()
{
    stack <int> num;
    stack <char> op;
    string s,N;
    int a,b;
	char ch;
    while(getline(cin,s))
    {
        N="";
        for(int i=0;i<s.size();++i)
        {
            ch=s[i];
            if(ch=='(')
            {
                op.push('(');
            }
            else if(ch=='+' || ch=='-')
            {
                while(!op.empty() && op.top()!='(')
                {
                    b=num.top();
                    num.pop();
                    a=num.top();
                    num.pop();
                    num.push(f(a,b,op.top()));
                    op.pop();
                }
                op.push(ch);
            }
            else if(ch=='*' || ch=='/' || ch=='%')
            {
                while(!op.empty() && (op.top()=='*' || op.top()=='/' || op.top()=='%'))
                {
                    b=num.top();
                    num.pop();
                    a=num.top();
                    num.pop();
                    num.push(f(a,b,op.top()));
                    op.pop();
                }
                op.push(ch);
            }
            else if(ch==')')
            {
                while(op.top()!='(')
                {
                    b=num.top();
                    num.pop();
                    a=num.top();
                    num.pop();
                    num.push(f(a,b,op.top()));
                    op.pop();
                }
                op.pop();
            }
            else if(isdigit(ch))
            {
                N+=ch;
            }
            else
            {
                if(N!="")
                {
                    num.push(t_num(N));
                    N="";
                }
            }
        }
        if(N!="")
        {
            num.push(t_num(N));
        }
        while(!op.empty())
        {
             b=num.top();
             num.pop();
             a=num.top();
             num.pop();
             num.push(f(a,b,op.top()));
             op.pop();
        }
        cout<<num.top()<<endl;
    }
    return 0;
}