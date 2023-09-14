#include<bits/stdc++.h>

using namespace std;

int prime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k, flag = 0;
		cin >> n >> k;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i ==0){
				k--;
				n /= i;
				if(k == 0){
					flag = 1;
					cout << i;
					break;
				}
			}
		}
		if(n > 1 && k == 1) cout << n;
		else if(flag == 0) cout << -1;
		cout << endl;
	}
}

