#include<bits/stdc++.h>
using namespace std;

void solve() {

}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		int res = 1;
		int r = (s[s.length() - 1] - '0') % 5;
		for(int i = s.length() - 2; i >= 0; i--) {
			res *= 2;
			res %= 5;
			r = r + (s[i] - '0')*res;
			r %= 5;
		}
		if(r == 0) {
			cout << "Yes" << endl;
		} else cout << "No" << endl;
	}
}

