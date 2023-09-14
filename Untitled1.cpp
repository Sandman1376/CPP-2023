#include <iostream>
using namespace std;

int gt(int n){
	long long s = 1;
	int i = 1;
	while(i <= n){
		s *= i;
		i++;
	}
	return s;
}

int main() {
	while(1){
		int n;
		cin >> n;
		if(n != 0){
			cout << gt(n) << endl;
		}
		else if(n == 0) break;
	}
}
