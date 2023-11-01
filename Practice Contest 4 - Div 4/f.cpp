#include <bits/stdc++.h>
#define ll long long int
using namespace std;
    
vector<int>allpali;    
void precompute(){
    for(int i=0;i<32786;i++){
        string s=to_string(i);
        string temp=s;
        reverse(s.begin(),s.end());
        if(temp==s){
            allpali.push_back(i);
        }
    }
}

void solve(){
 ll n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
     cin>>v[i];
 }
 unordered_map<int,int>x;
 ll ans=0;
 for(auto ele:v){
     ++x[ele];
for(auto pali:allpali){
    ans+=x[ele^pali];
}
 }
 cout<<ans<<endl;
}


int main()
{
precompute();
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}