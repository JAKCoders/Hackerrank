#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    
    cin>>p;

    
    for(int j=0;j<p;j++)
    {

        string s1;
        string s2;
        int count1=0;
        cin>>s1;
        
       cin>>s2;
        char ch;
        for(int i=0;s1[i]!='\0';i++)
        {
            ch =s1[i];
            count1=count(s2.begin(),s2.end(),ch);
            if(count1!=0)
            {
                
                break;
            }
        }
        if(count1==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}