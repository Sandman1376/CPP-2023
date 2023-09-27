#include<bits/stdc++.h>
using namespace std;

long long du(string a, long long m){
	long long r = 0;
	for(int i = 0; i < a.size(); i++){
		r = r * 10 + a[i] - '0';
		r %= m;
	}
	return r;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(du(s, 11) == 0) cout << "1" << endl;
		else cout << "0" << endl;
	}
}

