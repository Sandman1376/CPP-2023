#include<bits/stdc++.h>
using namespace std;

void hoa(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

void chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string word;
	while(ss >> word){
		v.push_back(word);
	}
	for(int i = 0; i < v.size() - 1; i++){
		chuanhoa(v[i]);
		cout << v[i];
		if(i == v.size() - 2) cout << ", ";
		else cout << " ";
	}
	hoa(v[v.size() - 1]);
	cout << v[v.size() - 1];
}
