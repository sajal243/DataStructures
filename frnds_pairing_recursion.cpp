#include<iostream> // advance problem
using namespace std;
// find the number of ways in which n friends can remain single or can be paired up
int frnds(int n){
    if(n == 0 || n==1 || n==2 ){
        return n;
    }
    return frnds(n-1) + frnds(n-2)*(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << frnds(n)<<endl;
    return 0;
}