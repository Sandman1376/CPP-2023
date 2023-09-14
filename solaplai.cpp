#include<bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b){
	while(b != 0){
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n, a, b;
		cin >> n >> a >> b;
		long long x = lcm(a, b);
		for(int i = 0; i < x; i++) cout << n;
		cout << endl;
	}
}

