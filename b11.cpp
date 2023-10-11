#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin,s);
		if((s[0]=='+' && s[1] == '8' && s[2] == '4')) {
			cout<<"0";
			for(int i = 3; i < s.size(); i++) {
				if(isdigit(s[i])) cout << s[i];
			}
		} else if(s[0]=='8' && s[1] == '4') {
			cout << "0";
			for(int i = 2; i < s.size(); i++) {
				if(isdigit(s[i])) cout << s[i];
			}
		} else for(int i = 0; i < s.size(); i++) {
				if(isdigit(s[i])) cout << s[i];
			}
		cout << endl;
	}
}

