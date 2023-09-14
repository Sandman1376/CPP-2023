#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i==0){
                int s =0;
                while(n%i==0){
                    s++;
                    n/=i;
                }
                cout << i<< " "<<s << " ";
            }
        }
        if(n > 1) cout << n<< " 1";
        cout << endl;
    }
}