#include<iostream>

using namespace std;

int check(int n){
    int c =0, l =0;
    while(n!=0){
        int x = n%10;
        if(x % 2==0) c++;
        else l++;
        n /=10;
    }
    if (c ==l) return 1;
    return 0;
}

int main(){
   int n, s=1;
   cin >> n;
   int a = 1, b=10;
   for(int i=0; i<n-1;i++){
       a*=10;
       b*=10;
   }
   for (int i=a; i<=b;i++){
       if(check(i)){
           cout << i << " ";
           s++;
           if(s %10 ==1) cout << endl;
       }
   }
}