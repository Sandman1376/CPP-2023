#include<bits/stdc++.h>

using namespace std;

int prime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int tang(int n){
	while(n >= 10){
		int r = n % 10;
		if(r <= (n/10) % 10)
			return 0;
		n /= 10;
	}
	return 1;
}

int giam(int n){
	while(n >= 10){
		int r = n % 10;
		if(r >= (n/10) % 10)
			return 0;
		n /= 10;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		for(int i = pow(10, n-1); i < pow(10,n); i++){
			if((tang(i) || giam(i)) && prime(i))
			++count;
		}
		cout << count << endl;
	}
}

