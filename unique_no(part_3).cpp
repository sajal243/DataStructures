#include<iostream>
using namespace std;
// finding unique no. from array wherre all no. repeated thrice except one no.
bool getBit(int n, int pos){
    return ((n&(1<<n)!=0));
}

int setBit(int n, int pos){
    return (n|(1<<pos));
}
int unique(int arr[], int n){
    int res = 0;
    for(int i=0; i<64; i++){
        int sum = 0 ;
        for(int j=0; j<n; j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            res  = setBit(res,i);
        }
    }
    return res;
}
int main(){
    int arr[] = {1,2,3,1,4,3,2,1,2,3};
    cout << unique(arr,10) << endl;
    return 0;
}