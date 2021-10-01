#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int arr[] = {20,30,40};
    cout << arr << endl; // gives address of 1st array element i.e 20
    cout << *arr << endl; // gives arr[0] value 
    // accessing all elemet using array pointer

    for(int i =0; i<3; i++){
        cout << *arr << endl;
       //  *arr ++ ;     illegal to increment array ptr
       cout << *(arr + i) << endl;

    }
}