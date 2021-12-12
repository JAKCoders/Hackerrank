#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,lastAnswer=0,idx;
    cout<<"Enter the values of n and q"<<endl;
    cin>>n>>q;
    string queries[q][3];
    string x,y;
    int a[n][n];
    cout<<"Enter the queries"<<endl;
    for(int i=0;i<q;i++)
        cin>>queries[i];
    for(int i=0;i<q;i++)
    {
       
        switch(queries[i][0])
        {
            case 1:idx=((queries[i][1]^lastAnswer)%n);
                a[idx].push_back(queries[i][2]);
                break;
            case 2:idx=((queries[i][1]^lastAnswer)%n);
                lastAnswer=a[idx][queries[i][2]%(a[idx].size())];
                cout<<lastAnswer<<endl;
                break;
        }
    }
    return 0;
}