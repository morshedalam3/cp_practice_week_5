#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define el cout<<"\n";
#define ll long long
#define PY cout<<"YES"<<"\n";
#define PN cout<<"NO"<<"\n";
ll mod=1e9+7;
void jain()
{    ll n;
	    cin>>n;
	    ll i,a[n],c1=0,sum=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2==0)
	        {
	            c1++;
	        }
	    }
	    ll p=1;
	    for(i=0;i<c1;i++)
	    {
	        p=(p*2)%mod;
	    }//subtract 1 so that when we have all array elements of array a because we want to remove subarrays of a 
	    if(c1==n)
	    {
	        p--;
	    }
	    cout<<p<<endl;
    
}
int main() {
	int T;cin>>T;
	while(T--)
	   jain();
	return 0;
}