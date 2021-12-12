#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count[4]={0};
   
    cin>>n;
    string p;
    string ch="!@#$%^&*()-+";
    
    cin>>p;
    int num=p.length();
    for(int i=0;p[i]!='\0';i++)
    {
        if(p[i]>=48 && p[i]<=57)
            count[0]=1;
        else if(p[i]>=97 && p[i]<=122)
            count[1]=1;
        else if(p[i]>=65 && p[i]<=90)
            count[2]=1;
        else
        {
            for(int j=0;ch[j]!='\0';j++)
            {
                if(p[i]==ch[j])
                {
                    count[3]=1;
                    break;
                }
            }
        }
    }
    int a=0;
    for(int i=0;i<4;i++)
    {
        if(count[i]==0)
            a++;
    }   
    
    if(a+num<6)
        a=a+(6-(a+num));
    cout<<a<<endl;
    return 0;
}