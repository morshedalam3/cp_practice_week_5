#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int a= stoi(s);
        int b=pow(10,n- 1);
        int A=a-b;
        cout<<A<<endl;
    }
}