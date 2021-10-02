#include<iostream>
using namespace std;
int main(){               // each row and column are sorted
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j] ;
        }
    }
    int r = 0, c= m-1;
    int target;
    cin >> target;
    bool found = false;
    while(r<n && c >=0){
        if(a[r][c] == target){
            found = true;
        }
        if(a[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found == true){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}