#include<iostream>
using namespace std;
int GCD(int m, int n){
    int temp;
    if(m < n){
        temp = m;
        m = n;
        n = temp;
    }
    int rem = m %n;
    if(rem == 0){
        return n;
    }
    else{
        return GCD(n,rem);
    }
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << GCD(m,n);
    return 0;
}