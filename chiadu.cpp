#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, flag = 0;
        cin >> a >> b;
        for(int i = 1; i < b; i++){
            if((a*i) % b == 1){
                flag = 1;
                cout << i << endl;
                break;
            }
        }
        if(flag == 0) cout <<-1<< endl;
    }
}