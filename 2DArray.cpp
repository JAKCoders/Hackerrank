#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],sum[16]={0};
    
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
            cin>>a[i][j];
    }
    int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++,k++)
        {
            sum[k]+=a[i][j]+a[i][j+1]+a[i][j+2];
            sum[k]+=a[i+1][j+1];
            sum[k]+=a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        }

    }
    int *x;
    x=max_element(sum,sum+16);
    cout<<(*x)<<endl;
    return 0;

}