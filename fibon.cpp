#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a=1, b=1;
        if(n==0) cout << 0 << endl;
        else if(n==3) cout << 1 << endl;
        else{
            for(int i = 2; i < n; i++){
                long long c = a + b;
                b = a;
                a = c;
            }
            cout << a << endl;
        }
    }
}