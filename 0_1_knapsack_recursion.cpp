#include<iostream>
#include<cmath>
using namespace std;
int knapsack(int cap, int wt[], int val[], int n){
    if(cap == 0 || n==0){
        return 0;
    }
    if(wt[n-1] > cap){
        return knapsack(cap,wt,val,n-1);
    }
    return max(knapsack(cap-wt[n-1],wt,val,n-1) + val[n-1], knapsack(cap,val,wt,n-1));
}
int main(){
    int n, cap;
    cin >> n >> cap;
    int wt[100];
    for(int i=0; i<n; i++){
        cin >> wt[i];
    }
    int val[100];
    for(int i =0; i<n; i++){
        cin >> val[i];
    }

    cout << knapsack(cap,wt,val,n) << endl;
    return 0;
}