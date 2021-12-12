#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,count=0,count1=0;
  
    cin>>n>>p;
    if(n%2==0)
    {
        if(n==p || p==1)
        {
            cout<<"0"<<endl;
            exit(0);
        }
        else 
        {
            for(int i=2;i<n;i=i+2)
            {
                if(i<=p)
                    count++;
            }
            for(int i=n-1;i>=2;i=i-2)
            {
                if(p<=i)
                    count1++;
            }
        }
        if(count>count1)
            cout<<count1<<endl;
        else 
            cout<<count<<endl;
    }
    else
    {
        if((n==p && p==n-1) || p==1)
        {
            cout<<"0"<<endl;
            exit(0);
        }
        else 
        {
            for(int i=2;i<n-2;i=i+2)
            {
                if(i<=p)
                    count++;
            }
            for(int i=n-2;i>=2;i=i-2)
            {
                if(p<=i)
                    count1++;
            }
        }
       
        if(count>count1)
            cout<<count1<<endl;
        else 
            cout<<count<<endl;
    }
    return 0;
       

}