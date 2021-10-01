#include<iostream>
using namespace std;

/*void swap(int a, int b){
    int temp = a;
    a= b;
    b= temp;
    cout << a << " " << b << endl;  // 3,2   
}
int main(){
    int a = 2, b=3;
    swap(a,b);
    cout  << a << " " << b << endl; // 2,3 i.e unchanged
    return 0;
}*/

void swap(int *a, int *b){
    int temp = *a;
    *a  = *b;
    *b = temp;
}

int main(){
    int a = 2, b=3;
    int *aptr = &a;
    int *bptr = &b;
    swap(*aptr ,*bptr);   // or swap(aptr , bptr) or swap(&a, &b)
    cout  << a << " " << b << endl; // 3,2 i.e changed. hence, we can change any value by pointer 
    return 0;
}
