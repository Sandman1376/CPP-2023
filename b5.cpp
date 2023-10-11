#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + 1], b[n + 2];
		int x = 0, y = 0;
		int max = -1e9;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max){
				max = a[i];
				y = i;
			}
		}
		for(int i = 0; i < n; i++){
			if(i != y){
				b[x] = a[i];
				x++;
			}
			if(i == y){
				b[x] = m;
				x++;
				b[x] = a[i];
				x++;
			}
		}
		for(int i =0; i < e; i++){
			if(b[i] < 0) cout << b[i] << " ";
		}
		for(int i = 0; i < e; i++){
			if(b[i] >=0) cout << b[i] << " ";
		}
		cout << endl;
	}
}


