#include<bits/stdc++.h>
using namespace std;
long long sum(long long n) {
	long long s = 0;
	while(n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

long long smith(long long n) {
	long long sum1= sum(n);
	long long sum2 = 0;
	long long temp = n;
	for(long long i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			while(n % i == 0) {
				sum2 += sum(i);
				n /= i;
			}
		}
	}
	if(n!=1) sum2 += sum(n);
	return sum1 == sum2;
}

int main() {
	long long n;
	cin >> n;
	if(smith(n) == 1) cout << "YES";
	else cout << "NO";
}

