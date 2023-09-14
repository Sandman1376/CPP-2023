#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
  string a;
  cin >> a;
  int check =1;
  int n = a.size();
  for (int i=0; i<= (n-1)/2; i++){
      if (a[i] != a [n-i -1]){
          check = 0;
          break;
      }
  }
  if (check ==1) cout << "YES" << endl;
  else cout << " NO" << endl;
    }
}