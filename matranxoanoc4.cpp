#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n], b[n*n];
    for(int i = 0; i < n*n; i++) cin >> b[i];
    sort(b, b + n*n);
    int d = n, c = n, k = 0, r = 0;
    while(k < n*n){
        for(int i = r; i < c; i++) a[r][i] = b[k++];
        for(int i = r + 1; i < d; i++) a[i][c - 1] = b[k++];
        if(r != d - 1) for(int i = c - 2; i >= r;i--) a[d - 1][i] = b[k++];
        if(r != c - 1) for(int i = d - 2; i > r; i--) a[i][r] = b[k++];
        r++; c--; d--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
