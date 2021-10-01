#include <iostream>
using namespace std;
int fact(int num){
    if(num>0){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int nCr(int a, int b){
    return fact(a)/(fact(b)*fact(a-b));
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        for(int j=0; j<=i; j++){
            cout << nCr(i,j) <<" " ;
        }
        cout << endl;
    }
    return 0;
}