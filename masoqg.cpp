#include<iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   while (t--){
       string a;
       cin >> a;
       int n = a.size();
       for(int i =0; i<n; i++){
           if(i  <= n - 3 && a[i] == '0' &&a[i+1]== '8' &&  a[i+2] == '4')
            i+=2;
           else cout << a[i];
       }
       cout << endl;
   }
}