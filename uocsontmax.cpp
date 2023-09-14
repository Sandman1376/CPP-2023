#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, x;
		cin >> n;
		for(int i = 2; i <= sqrt(n); i++) {
			while(n % i == 0) {
				x = i;
				n /= i;
			}
		}
		if(n > 1) x = n;
		cout << x << endl;
	}
}

