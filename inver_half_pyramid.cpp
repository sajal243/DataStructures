#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter rows and columns:"<< endl;
    cin >> row >> col;
    for(int i=1 ; i <= row; i++){
        for (int j = i; j<= col; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}