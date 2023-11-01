#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;cin>>t;
    while (t--)
    {   int x;
        cin>>x;
        
        ll n[11];

       int s=9;int i=0;
        while(x)
        {
            if(x>=s)
            { x=x-s; n[i++]=s; }
            s--;
        }

        for(int j=i-1;j>=0;j--)
            cout<<n[j];
        cout<<endl;
    }
 return 0;
}