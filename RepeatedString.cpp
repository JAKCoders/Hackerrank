#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,y,z=0,w=0,count1=0;
    string s,str;
   
    cin>>s;
   
    cin>>n;
    if(s.length()==1 && s[0]=='a')
    {
        cout<<n<<endl;
        return 0;
    }
    y=count(s.begin(),s.end(),'a');
    int x=s.size();
    while(w<=n)
    {
        w=w+x;
        z++;
    }
    count1=z*y;
    x=x-(w-n);
    str=s.substr(x);
    int a=count(str.begin(),str.end(),'a');
    count1=count1-a;
    cout<<count1<<endl;
    return 0;
}