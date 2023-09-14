#include<iostream>

using namespace std;

long long gcd(long long a, long long b){
	long long x = a * b;
	while(b != 0){
		long long x = a % b;
		a = b;
		b = x;
	}
	return x/a;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n, s = 1;
		cin >> n;
		for(int i = 1; i <= n; i++) s = gcd(s,i);
		cout << s << endl;
	}
}

