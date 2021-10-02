#include<iostream>          // Brute force technique
#include<math.h>
using namespace std;

int trapped_water(int arr[], int n){
    int left[n], l = INT_MIN;
    //left[0] = arr[0];
    for(int i=0; i<n; i++){
        l = max(l, arr[i]);
        left[i] = l;
        //cout << left[i] << " ";
    }

    cout << endl;
    int right[n], r = INT_MIN;
    for(int i=n-1; i>=0; i--){
        r = max(arr[i], r);
        right[i] = r;
        //cout << right[i] << " ";
    }

    int water[n], sum = 0;
    for(int i=0; i<n; i++){
        water[i] = (min(left[i], right[i])- arr[i]);
        sum += water[i];
    }

    return sum;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << trapped_water(arr, n) <<endl;
    return 0;
}