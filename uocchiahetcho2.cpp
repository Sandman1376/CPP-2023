#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		for(int i = 1; i < sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0) count++;
				if((n/i) % 2 == 0) count++;
			}
		}
		int x = sqrt(n);
		if(x*x == n && x % 2 == 0) count++;
		cout << count << endl;
	}
}

