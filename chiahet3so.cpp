#include<iostream>
#include<cmath>

using namespace std;

long long gcd(long long a, long long b){
         long long x=a*b; 
         while(b!=0){ 
         long long x=a%b; 
         a=b; 
         b=x; 
     } 
     return x/a;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,n;
        cin >>a>>b>>c>>n;
        long long s = pow(10, n-1);
        long long x = gcd(a, gcd(b,c));
        if(x >= s*10) cout << -1 << endl;
        else cout<<x*(long long)ceil(pow(10,n-1)/x)<<endl;
    }
}