#include<iostream>
using namespace std;
int ntopowerp(int n, int p){
    if(p==0){
        return 1;
    }
    return n*ntopowerp(n,p-1);
}
int main(){
    int n, p;
    cin >> n >> p;
    cout << ntopowerp(n,p);
    return 0;

}