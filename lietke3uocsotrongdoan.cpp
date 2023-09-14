#include<bits/stdc++.h>

using namespace std;

int prime[1000001];

void sang(){
	for(long long i = 1; i <= 1000000; i++)
	prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(long long i = 2; i <= sqrt(1000000);i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j += i)
			prime[j] = 0;
		}
	}
}

int main() {
	sang();
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		int count = 0;
		int l = sqrt(a);
		if(1ll*l*l != a)
			++l;
		for(int i = l; i <= sqrt(b); i++){
			if(prime[i])
			++count;
		}
		cout << count << endl;
	}
}

