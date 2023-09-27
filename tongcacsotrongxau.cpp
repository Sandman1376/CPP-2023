#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		s += 'a';
		long long sum = 0;
		long long res = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])){
				sum = sum * 10 + (s[i] - '0');
			}
			else{
				res += sum;
				sum = 0;
			}
		}
		cout << res << endl;
	}
}

