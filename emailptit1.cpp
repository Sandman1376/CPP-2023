#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp) {
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size() - 1; i++) {
		cout << v[i][0];
		if(i != v.size() - 2) cout << " ";
	}
	cout << v[i][0];
}
