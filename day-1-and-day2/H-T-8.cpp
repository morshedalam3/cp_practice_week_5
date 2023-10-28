#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6;
ll n,m, arr[N+2];
bool ok (ll xx){
 ll sum = 0;
 for (ll i = 1; i<=n; i++)
 {
    if (arr[i]>xx)sum+=arr[i]-xx;
    
 }
 return sum>=m;
}
int main(){

    cin>>n>>m;

    for (ll i = 1; i <=n; i++)
    {
       cin>> arr[i];
    }
    ll lo =0,high = 2e9,md;
    while (high-lo>3)
    {
        md=(lo+high)/2;
        if (ok(md))lo = md;
        else high = md;
        
    }
    ll ans;
    for (md=high; md>=lo; md--)
    {
        if (ok(md))
        {
            ans = md;
            break;
        }
        
    }
    cout<<ans<<endl;

    return 0;
}