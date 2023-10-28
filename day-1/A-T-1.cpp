#include<bits/stdc++.h>
using namespace std;

int GetPosition(int Num, vector<int>& arr) {
    auto it = lower_bound(arr.begin(), arr.end(), Num);

    if (it != arr.end() && *it == Num) {
        return distance(arr.begin(), it) + 1;
    } else {
        return -1;
    }
}

int main() {
    int Case = 1;
    while (true) {
        int N, Q;
        cin >> N >> Q;
        if (N == 0 && Q == 0) {
            break;
        }

        cout << "CASE# " << Case << ":"<<endl;
        Case++;
        vector<int> List1;

        for (int i = 0; i < N + Q; i++) {
            if (i < N) {
                int num;
                cin >> num;
                List1.push_back(num);
            }

            if (i == (N - 1)) {
                sort(List1.begin(), List1.end());
            }

            if (i >= N) {
                int Qvalue;
                cin >> Qvalue;
                int Position = GetPosition(Qvalue, List1);

                if (Position == -1) {
                    cout << Qvalue << " not found"<<endl;
                } else {
                    cout << Qvalue << " found at " << Position <<endl;
                }
            }
        }
    }

    return 0;
}
