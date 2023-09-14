#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x : a){
            cin >> x;
        }
        sort(a,a+n);
        int min = 1e9;
        for(int i=0; i<n-1;i++){
            if(abs(a[i]-a[i+1])<min){
                min = abs((a[i]-a[i+1]);
            }
        }
        cout<<min<<endl;
    }
}