#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, a = 1, b = 1;
		cin >> n;
		if(n<=3){
			cout << "YES"<< endl;
			continue;
		}
		while(a<n){
			long long x = a+b;
			b = a;
			a = x;
		}
		if(a==n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

