#include<iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   while (t--){
       string a;
       cin >> a;
       int n = a.size();
       int flag =1;
       for(int i =1; i<n; i++){
           if(abs(a[i] - a[i-1])!=1){
               flag = 0;
               break;
           }
       }
       if(flag==1) cout<< "YES" << endl;
       else cout << "NO" << endl;
   }
}