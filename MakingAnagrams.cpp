#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    int count=0,a[26]={0},b[26]={0};
    cout<<"Enter the string"<<endl;
    cin>>s1;
    cin>>s2;
    int x=s1.length(),y=s2.length();
    for(int i=0;i<x;i++)
    {
        char ch=s1[i];
        int z=97-int(ch);
        a[z]++;
    }
    for(int i=0;i<y;i++)
    {
        char c=s2[i];
        int w=97-int(c);
        b[w]++;
    }
    cout<<s1<<endl<<s2<<endl;
    for(int i=0;i<26;i++)
    {
        
            cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<26;i++)
    {
        
            cout<<b[i]<<" ";
    }
    return 0;
}