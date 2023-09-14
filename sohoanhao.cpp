#include<bits/stdc++.h>

using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
		return 0;
	}
	return n > 1;
}

int perfect(long long n){
	for(int i = 1; i <= 32; i++){
		if(prime(i)){
			int temp = (long long)pow(2,i) - 1;
			if(prime(temp)){
				long long hh = 1ll*temp * (long long)pow(2, i - 1);
				if(hh == n)
					return 1;
			}
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(perfect(n)) cout << 1 <<endl;
		else cout << 0 << endl;
	}
}

