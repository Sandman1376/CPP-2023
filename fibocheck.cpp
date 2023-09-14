#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a=1, b=1;
        if(n<=3){
            cout << "YES" << endl;
            continue;
        }
        while(a < n){
            long long k = a + b;
            b = a;
            a = k;
        }
        if(a==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}