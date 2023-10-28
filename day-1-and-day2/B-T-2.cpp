#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int L,R;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<a.size(); i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    cin>>m;
    vector<int>b(m);
    for(int i=0; i<b.size(); i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<b.size(); i++)
    {
        int checke  = b[i];
        L = -5;
        int j=0;

        while(a[j]<checke && j<a.size())
        {
            L = a[j];
            j++;
        }

        int p = j-1;
        j = a.size()-1;

        while(a[j]>checke && j>p)
        {
            R = a[j];
            j--;
        }

        if(j>=a.size()-1 && a[j] <checke)
        {
            R = -5;
        }

        if(L==-5 && R ==-5)
        {
            cout<<"X X"<<endl;
        }
        else if(L==-5 )
        {
            cout<<"X "<<R<<endl;
        }
        else if(R==-5 )
        {
            cout<<L<<" X"<<endl;
        }
        else
        {
            cout<<L<<" "<<R<<endl;
        }

    }

    return 0;
}