#include<iostream>
#include<cmath>

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
				long long p = temp * (long long)pow(2, i - 1);
				if(p == n)
					return 1;
			}
		}
	}
	return 0;
}

int main() {
		long long n;
		cin >> n;
		for(int i=0; i<=n ; i++){
		    if(perfect(i)) cout<<i<<' ';
	}
}

