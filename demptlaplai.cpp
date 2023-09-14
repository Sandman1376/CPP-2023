#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        int a[n];
        map <int,int> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[a[i]]++;
            if (b[a[i]] == 2) count += 2;
            else if (b[a[i]] > 2) count++;
        }
        cout << count << endl;
    }
}

