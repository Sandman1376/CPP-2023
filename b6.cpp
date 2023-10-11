#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		double c, d;
		cin >> a >> b >> c >> d;
		double x[40];
		x[3] = x[4] = 2.5;
		x[5] = x[6] = 3.0;
		x[7] = x[8] = x[9] = 3.5;
		x[10] = x[11] = x[12] = 4.0;
		x[13] = x[14] = x[15] = 4.5;
		x[16] = x[17] = x[18] = x[19] = 5.0;
		x[20] = x[21] = x[22] = 5.5;
		x[23] = x[24] = x[25] = x[26]= 6.0;
		x[27] = x[28] = x[29] = 6.5;
		x[30] = x[31] = x[32] = 7.0;
		x[33] = x[34] = 7.5;
		x[35] = x[36] = 8.0;
		x[37] = x[38] = 8.5;
		x[39] = x[40] = 9.0;
		double i = x[a];
		double j = x[b];
		double n = (i+j+c+d)/4;
		cout << (int)n;
	}
}

