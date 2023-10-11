#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string, long long> x;
	string tmp, loai, sl, check, time;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		cin >> loai >> sl >> check >> time;
		if(check == "IN"){
			if(loai == "Xe_con" && sl == "5")
				x[time] += 10000;
			else if(loai == "Xe_con" && sl == "7")
				x[time] += 15000;
			else if(loai == "Xe_tai" && sl == "2")
				x[time] += 20000;
			else if(loai == "Xe_khach" && sl == "29")
				x[time] += 50000;
			else if(loai == "Xe_khach" && sl == "45")
				x[time] += 70000;
		}
	}
	for(auto a : x){
		cout << a.first << ": " << a.second << endl;
	}
}

