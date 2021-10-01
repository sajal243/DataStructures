#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << *p << endl;  // value of a
    cout << **q << endl; // value of a
    cout << p << endl;  // address of a
    cout << *q << " " << q << endl;     // value of p i.e address of a;
    ** q = 20;
    cout << a;
}