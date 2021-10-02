#include<iostream>
using namespace std;
void sieveFactor(int n){
    int spf[100] = {0};
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){    //filling spf[] array using sieve concept i.e marking factors with smallest prime factor
        if(spf[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){                  // printing prime factors of a no.
        cout << spf[n] << " ";
        n = n/spf[n];
    }
}

int main(){
    int n;
    cin >> n;
    sieveFactor(n);
    return 0;
}