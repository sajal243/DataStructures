#include<iostream>
using namespace std;
bool isin2pow(int n){
    cout << !(n & n-1) << endl;
    cout << (n && !(n & n-1)) << endl;
    return (n && !(n & n-1));
}
int main(){
    cout << isin2pow(8) << endl;
    return 0;
}