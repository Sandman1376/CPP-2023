#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	set<string> se;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		se.insert(s);
	}
	cout << se.size();
}

