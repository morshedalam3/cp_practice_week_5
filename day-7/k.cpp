#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll px,py;
        cin>>px>>py;
        ll ax,ay,bx,by;
        cin>>ax>>ay;
        cin>>bx>>by;

        ll ap=(ax-px)*(ax-px) + (ay-py)*(ay-py);
        ll bp=(bx-px)*(bx-px) + (by-py)*(by-py);
        ll ao=(ax)*(ax) + (ay)*(ay);
        ll bo=(bx)*(bx) + (by)*(by);
 
 
        ll ans=min(max(ap,ao),max(bp,bo));
 
        ll ab=(ax-bx)*(ax-bx) + (ay-by)*(ay-by);
 
        double an1=ans,an3=ans;
        ll val1=max(bp,ao);
 
 
        double dis=(sqrt(ab))/2.0;
        double dis1=sqrt(val1);
        an1=max(dis,dis1);
        ll val2=max(bo,ap);
        double dis3=sqrt(val2);
 
        an3=max(dis,dis3);
        double an2=sqrt(ans);
 
        an2=min(an2,an1);
        an2=min(an2,an3);

        cout<<setprecision(12)<<an2<<endl;
 
    }
 
    return 0;
}