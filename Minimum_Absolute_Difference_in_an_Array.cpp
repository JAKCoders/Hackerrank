#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    int k=0,x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int b=abs(a[0]-a[1]);
    for(int i=0;i<n;i++)
    {
       
            x=abs(a[i]-a[i+1]);
            if(b>x)
                b=x;
        
    }
    cout<<b<<endl;
    
   
    
    return 0;

}