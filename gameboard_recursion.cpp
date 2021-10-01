#include<iostream>
using namespace std;
// count the no. of possible ways to reach from start to end
int gameboard(int start, int end){
    if(start == end ){
        return 1;
    }
    if(start > end){
        return 0;
    }
    int count = 0;
    for(int i=1; i<=6; i++){
        count += gameboard(start+i, end);
    }
    return count;
    

}
int main(){
    int start , end;
    cin >>start >> end;
    cout << gameboard(start, end) << endl;
    return 0;
}