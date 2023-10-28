#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,h,k=0;
        cin>>n>>h;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int j=0;
        for( j=n-1;j>=0;j--){
            k+=a[j];
            if(k>=h) break;
            
        }
         j==-1?cout<<0<<endl:cout<< a[j]<<endl;
    }
	return 0;
}