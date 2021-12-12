#include<bits/stdc++.h>
using namespace std;
int main()
{
    int str1[26]={0},str2[26]={0};
    string a,b;
    cout<<"Enter the strings"<<endl;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;a[i]!='\0';i++)
        str1[97-a[i]]++;
    for(int i=0;b[i]!='\0';i++)
        str2[97-b[i]]++;
    for(int i=0;i<26;i++)
        cout<<str1[i]<<" ";
    cout<<endl;
    for(int i=0;i<26;i++)
        cout<<str2[i]<<" ";
    return 0;
}