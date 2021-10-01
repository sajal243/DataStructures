#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n+1];
    cin >> a;
    bool flag = true;
    for(int i=0;i<n; i++){
        if(a[i] != a[n-1-i])
            flag = false;
            break;
    }
    if(flag == true)
        cout << "Word is palindrome " << endl;
    else
        cout << " Word is not a palindrome" << endl;

    return 0;
}