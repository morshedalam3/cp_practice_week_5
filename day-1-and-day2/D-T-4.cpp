#include<bits/stdc++.h>
using namespace std;

bool can(vector<int>& vessels,int n,int m, int cap) {
    int container = 0,in_cur_container = 0;
    for (int i = 0; i < n; i++)
    {
        if (vessels[i]>cap)
        {
            return false;
        }
        if (in_cur_container + vessels[i]>cap)
        {
            in_cur_container = 0;
        }
        if (in_cur_container ==0)
        {
            container++;
        }
        if (container>m)
        {
            return false;
        }
        in_cur_container+=vessels[i];
        
    }
    
    return true;
}

int main() {
    int n, m, v;
    while (cin >> n >> m) {
        vector<int> vessels;
        vessels.reserve(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v;
            vessels.push_back(v);
            sum += v;
        }
        int left = 1, right = sum;
        long long r = right+1;
        while (left<=right) {
            long long mid = (left + right) / 2;
            if (can(vessels,n,m,mid)){
             r = mid;
             right = mid-1;
            } 
            else left = mid + 1;
        }
        cout << r << endl;
    }
    return 0;
}
