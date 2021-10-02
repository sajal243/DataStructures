#include<iostream>
using namespace std;
int main(){
    int n,x=0,last;
    cin >> n;
    for(int i=n; i>0; i=i/10){
        last = i%10;
        x = x*10 + last;
    }
    cout << "Reversed number is :"<< x ;
    return 0;
}