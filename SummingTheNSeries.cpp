#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,sum=0;
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            sum=sum+(i*i-((i-1)*(i-1)));
        cout<<sum%1000000007<<endl;
        sum=0;
    }
    return 0;
}