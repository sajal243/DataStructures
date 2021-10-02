#include<iostream>
using namespace std;
bool isSafe(int **maze, int i, int j, int n){
    if(i<n && j<n && maze[i][j] == 1){
        return true;
    }
    return false;
}
bool path(int** maze,int i, int j,int n,int** solArr){
    if((i == n-1) && (j == n-1)){
        solArr[i][j] = 1;
        return true;
    }
    if(isSafe(maze,i,j,n)){
        solArr[i][j] = 1;
        if(path(maze,i+1,j,n,solArr)){
            return true;
        }
        if(path(maze,i,j+1,n,solArr)){
            return true;
        }
        solArr[i][j] = 0;  // backtracking  
        return false;
    }
return false;
}
int main(){
    int n,i,j;
    cin >> n;
    int** maze = new int*[n];
    for(int i=0; i<n; i++){
        maze[i] = new int[n];
    } 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> maze[i][j];
        }
    }

    int** solArr = new int*[n];
    for(int i =0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;
        }
    }

    if(path(maze,0, 0,n,solArr)){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cout << solArr[i][j]<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}