#include<iostream>       // problem ::  There is a park and each day visitors come there, Find the no. of record breaking days ??
using namespace std;     //    record Breaking day :: (Both satisfied)
int main(){                 //       1) That day having the maximum visitors than all previous day
    int n;                   //      2) Either it is a last day or that day visitors greator than the following day
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int pd = -1;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > pd && arr[i] > arr[i+1]){
            count ++ ;
        }
        pd = max(pd,arr[i]);
    }
    cout << count << endl;
    return 0;
}                                   
