#include<iostream>
using namespace std;
int recusiveSum(int n)
{
    if(n == 0){
        return 0;
    }

    return n + recusiveSum(n-1);
    
}   
int main(){
    int n;
    cin >> n;
    cout << recusiveSum(n);
    return 0;
   
}