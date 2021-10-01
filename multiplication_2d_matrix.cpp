#include<iostream>
using namespace std;
int main(){
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int ans[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            for(int k=0; k<4; k++){
                ans[i][j] = a[i][k] * b[k][j];
            }
        }

    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}