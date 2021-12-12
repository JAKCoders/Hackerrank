#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    
    cin>>n>>m;
    long long int a[n+1]={0};
    long long int queries[m][3];
   
    for(long long int i=0;i<m;i++)
    {
        for(long long int j=0;j<3;j++)
            cin>>queries[i][j];
    }
    for(long long int i=0;i<m;i++)
    {
        for(long long int j=queries[i][0];j<=queries[i][1];j++)
        {
            a[j]=a[j]+queries[i][2];
        }
    }
    sort(a,a+n+1);
    cout<<a[n]<<endl;
    return 0;
}