#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	vector<int> x, y;
	while(t--){
		string s;
		getline(cin, s);
		int a = 0;
		for(int i = 1; i < s.size()-1; i++){
			if((s[i] == ' ' && s[i+1] == ' ')||(s[i] == ' ' && s[i-1] == ' ')) continue;
			if(s[i] == ' ') a++;
		}
		x.push_back(a);
	}
	int i = 0;
	while(i <x.size()){
		if(x[i] == 5){
			if(x[i+1] != 7){
				i += 2;
				continue;
			}
			i+=2;
			while(x[i] == 5 && i < x.size()){
				i+=2;
			}
			y.push_back(1);
		}
		else if(x[i] == 6){
			y.push_back(2);
			i+=4;
		}
		else i++;
	}
	cout << y.size() << endl;
	for(int i = 0; i < y.size(); i++) cout << y[i] << endl;
}

