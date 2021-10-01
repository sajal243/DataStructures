#include<iostream>
using namespace std;
int fact(int num){
    /*int x =1;
    for(int i=num; i>0; i--){      itterative method
        x = x*i;
    }
    return x;*/
    if(num>=1){
        return num * fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin >> n;
    int res = fact(n);
    cout << res <<endl;
    return 0;
}