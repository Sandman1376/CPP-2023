#include<iostream>

using namespace std;

long long ucln(long long a, long long b) { 
     while(b!=0){ 
         long long x=a%b; 
         a=b; 
         b=x; 
     } 
     return a; 
 } 
 int main(){ 
         int t; 
         cin>>t; 
         while(t--){ 
                 long long a,b; 
                 cin>>a>>b; 
                 cout<<a*b/ucln(a,b)<<" "<<ucln(a,b)<<endl; 
         } 
 }