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
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(prime(i)) cout << i<< " ";
    }
}