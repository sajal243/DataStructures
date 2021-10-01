#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            for(int j=0; j<i; j++){
                cout << j%2 << " ";
            }
        }
        else{
            for(int j=1; j<=i; j++){
                cout << j%2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}