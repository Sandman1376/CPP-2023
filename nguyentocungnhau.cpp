#include<bits/stdc++.h>

using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, count = 0, flag = 1;
		cin >> n;
		for(int i = 1; i <= n; i++){
			if(gcd(i, n) == 1) count++;
		}
		if(prime(count) == 0) flag = 0;
		if(flag == 0 || count == 0 || count == 1) cout << 0 << endl;
		else cout << 1 << endl;
	}
}

