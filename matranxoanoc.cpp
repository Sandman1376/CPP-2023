#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n*m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int d = n, c = m, k = 0, r = 0;
        while(k < n*m){
            for(int i = r; i < c; i++) b[k++] = a[r][i];
            for(int i = r + 1; i < d; i++) b[k++] = a[i][c - 1];
            if(r != d - 1) for(int i = c - 2; i >= r;i--) b[k++] = a[d - 1][i];
            if(r != c - 1) for(int i = d - 2; i > r; i--) b[k++] = a[i][r];
            r++; c--; d--;
        }
        for(int i = 0; i < n*m; i++) cout << b[i] << " ";
        cout << endl;
    }
}
