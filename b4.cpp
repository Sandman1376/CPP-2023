#include<bits/stdc++.h>
using namespace std;

long long s5(string a){
	long long x = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '6') a[i]--;
		x = x*10 + a[i] - '0';
	}
	return x;
}

long long s6(string a){
	long long x = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '5') a[i]++;
		x = x*10 + a[i] - '0';
	}
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << s5(a) + s5(b) << " " << s6(a) + s6(b) << endl;
	}
}

