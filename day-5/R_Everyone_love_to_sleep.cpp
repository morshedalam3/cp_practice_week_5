#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){ 
    ll x,i,j,k,p,s,h,m;
    array<ll,2>n[100];
 
    int t;cin>>t;
    while (t--)
    
    {
        cin>>x>>h>>m;
        for(i=0;i<x;i++)
            cin>>n[i][0]>>n[i][1];
 
        sort(n,n+x);
        s=0;
        for(i=0;i<x;i++){
            k=n[i][0]; p=n[i][1];
 
            if(k>h) {
 
                if(m>p)
                    { h++; p=p+(60-m); }
 
                else p=p-m;
 
                if(h>=24) h=h-24;
 
                if(h>k) { k=k+(24-h); }
                else k=k-h;
 
                s=1;
                break;
            }
            else if(k==h&&p>=m)
            {
                k=0; p=p-m;
                s=1;
                break;
            }
        }
 
        if(s==0)
        {
            k=n[0][0]; p=n[0][1];
 
            if(m>p) { h++; p=p+(60-m); }
            else p=p-m;
 
            if(h>=24) h=h-24;
 
            if(h>k) { k=k+(24-h); }
            else k=k-h;
        }
 
        cout<<k<< " "<<p<<endl;
    }  
    return 0;
}