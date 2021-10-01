#include<iostream>
using namespace std;
// total paths to reach from start(0,0) to end(n-1,n-1) 
int countPath(int i, int j,int n){
    if((i == n-1) && (j==n-1)){
        return 1;
    }
    if((i>n-1) || (j>n-1)){
        return 0;
    }
    return countPath(i+1,j,n)+countPath(i,j+1,n);
}
int main(){
    int i,j,n;
    cin >> n;
    cout << countPath(0,0,n) << endl;
    return 0;
}