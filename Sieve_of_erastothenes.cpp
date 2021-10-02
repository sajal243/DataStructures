#include<iostream>
using namespace std;

// to find all prime no. between any no. via marking the factors 
void primeSieve(int n){
    int a[100] = {0};
    for(int i=2; i<n; i++){
        if(a[i] == 0){
            for(int j=i*i; j<n; j+=i){
                a[j] = 1;
            }
        }
    }
    int count = 0;
    for(int i=2; i<n; i++){
        if(a[i] == 0){
            cout << i <<" ";
            count ++;
        }
    }
    cout << endl;
    cout << "Total prime numbers are: " << count ;
}
int main(){
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}