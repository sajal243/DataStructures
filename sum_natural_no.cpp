#include<iostream>
using namespace std;
int sum(int num){
    return (num*(num-1))/2;
}
int main(){
    int n;
    cin >> n;
    cout << sum(n)<< endl;
    return 0;
}