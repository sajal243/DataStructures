#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,digit = 0,sum =0;
    double last;
    cin >> n;
    for(int i=n; i>0; i=i/10){
        digit += 1;
    }

    for(int i=n; i>0; i=i/10){
        last = i%10;
        sum = sum+ pow(last, digit);
    }
    //cout << sum;
    if(sum == n){
        cout << "It is a Armstrong number"<<endl;
    }
    else{
        cout << "Not a Armstrong number" << endl;
    }
    return 0;
}