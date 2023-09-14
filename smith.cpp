#include<bits/stdc++.h>

using namespace std;

int sum(int n){
	int s = 0;
	while(n){
		s += n % 10;
		n /= 10;
	}
	return s;
}

int smith(int n){
	int sum1 = sum(n);
	int sum2 = 0;
	int temp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0) sum2 += sum(i);
		n /= i;
	}
	if(temp == n)
		return 0;
	if(n != 1)
	sum2 += sum(n);
	return sum1 == sum2;
}

int main() {
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		if(smith(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

