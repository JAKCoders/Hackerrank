#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    
    cin>>n>>m;
    char topics[n][m];
    string s1,s2;
    int x=(n*(n-1))/2;
    int count[x]={0};
    
    for(int i=0;i<n;i++)
        cin>>topics[i];
    int y=0;
    for(int i=0;i<n;i++)
    {
        s1=topics[i];
        for(int j=i+1;j<n;j++)
        {
            s2=topics[j];
            for(int k=0;k<m;k++)
            {
                if(s1[k]=='1' || s2[k]=='1')
                    count[y]++;
            }
            y++;
        }
    }
    
    
    int* a = max_element(count, count + y);
    int b=0;
    for(int i=0;i<y;i++)
    {
        if(count[i]==int(*a))
            b++;
    }
    cout<<int(*a)<<endl<<b<<endl;
    return 0;
}