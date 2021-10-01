#include<iostream>
using namespace std;
int main(){
    int a = 45;
    int *ptr;             // or *ptr = &a      
    ptr = &a;             // Note :: 1) datatype of variable = datatype of pointer 
    cout << &a << endl;   //     2) Only 4 operation :: ++, -- , -, +
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 12;
    cout << a << endl;
    cout << ptr << endl;
}