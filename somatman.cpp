#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int n = a.size();
        if(a[n-2] == '8' && a[n-1] == '6')
        cout << 1 << endl;
        else cout << 0 << endl;
    }
}