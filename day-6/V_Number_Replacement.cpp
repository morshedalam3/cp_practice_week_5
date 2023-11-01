#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        bool f=true;
        map<int,int>m;
        map<int,char>ma;
        for(int i=0; i<n; i++)
        {
            if(m[a[i]]==0)
            {
                ma[a[i]]=s[i];
            }
            else if(ma[a[i]]!=s[i])
            {
                f=false;
            }
            m[a[i]]++;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}