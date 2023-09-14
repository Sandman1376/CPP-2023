#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double a,b,c,d;
        cin >> a>>b>>c>>d;
        double k= sqrt((a-c) *(a-c) + (b-d)*(b-d));
        cout << setprecision(4) <<fixed << k<<endl;
    }
}