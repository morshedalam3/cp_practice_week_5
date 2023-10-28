#include<bits/stdc++.h>
using namespace std;

map<int,int>Factor;
void primeFactor(int n){
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			n = n/i;
			Factor[i]++;
		}
	}
	if(n>1) Factor[n]++;
}
int main(){
	int t;cin >> t;
	while(t--){
		Factor.clear();
		int n;	cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
			primeFactor(vec[i]);
		}
		bool ok = true;
		for(auto it:Factor){
			if(it.second % n != 0) ok=false;
		}
		if(ok) cout << "YES"<<endl;
		else cout << "NO"<<endl;
	}
}