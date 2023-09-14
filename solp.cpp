#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
     long long a;
     int flag = 1;
   cin >> a;
   while (a>0){
       int n = a %10;
       a  /=10;
       if (n !=0&&n!= 6&& n!=8){
           flag = 0;
           break;}
   }
   if (flag==1){
   cout << "YES" << endl;}
   else 
    cout << "NO" << endl;
    }
}