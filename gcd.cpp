#include<iostream>

using namespacestd;

long long gcd(long long a, long long b){
    while(b!=0){
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}