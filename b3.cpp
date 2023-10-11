#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i<n; i++) {
			cin >> a[i];
		}
		int flag = 0;
		for(int i = 0; i < n - 1; i++){
			if(!flag){
				for(int j = i +1; j < n; j++){
					if(a[i] == a[j]){
						cout << a[i] << endl;
						flag = 1;
						break;
					}
				}
			}
		}
		if(!flag) cout << "NO" << endl;
	}
}

