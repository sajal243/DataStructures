#include<bits/stdc++.h>
using namespace std;

int func( vector<int>doubts, int start, int end){
    int doubtsSolved = 0;
    //cout << doubts[end] << endl;
    for(int i = start; i<= end; i++){
        //cout << doubts[0] << endl;
        doubtsSolved += doubts[i];
    }

    return doubtsSolved;
}
int main(){
    int n , k;
    cin >> n >> k;

    vector<int> doubts;
    int a;

    for(int i=0; i<n; i++){
        cin >> a;
        doubts.push_back(a);
    }


    int start, end;
    for(int i= 0; i<k; i++){
        cin >> start >> end;
        cout << func(doubts, start, end ) << endl;
    }
    return 0;
}