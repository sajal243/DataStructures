#include<iostream>
using namespace std;
void divisible(int n, int a, int b){
    int count1 , count2 , count3;
    count1 = n/a;
    count2 = n/b;
    count3 = n/(a*b);
    cout << count1 + count2 - count3 ;
}
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    divisible(n,a,b);
    return 0;
}