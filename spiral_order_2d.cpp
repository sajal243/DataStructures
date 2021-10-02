#include<iostream>
using namespace std;
signed main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int x = 0;
    int size = n*m;
    int start_row =0, start_col=0, end_row = n-1,end_col = m-1;
    while(start_row <= end_row && start_col <= end_col && x<size){
        // for start row
        for(int col = start_col; col <= end_col && x<size ; col++){
            cout << a[start_row][col]<<" ";
            x++;
        }
        start_row ++;

        // for end col
        for(int row = start_row; row <= end_row && x<size; row++){
            cout << a[row][end_col]<<" ";
            x++;
        }
        end_col --;

        // for end row
        for(int col = end_col; col>= start_col && x<size; col--){
            cout << a[end_row][col] << " ";
            x++;
        }
        end_row --;

        // for start  col
        for(int row = end_row; row>= start_row && x<size; row-- ){
            cout << a[row][start_col] << " ";
            x++;
        }
        start_col ++ ;
    }
    return 0;
}
 