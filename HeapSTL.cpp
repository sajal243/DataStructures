#include<bits/stdc++.h>
#include<string>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>

/*
  push() --- O(log(n)) ,  pop() ----- O(log(n)),      top() ----O(1),   size() ----- O(1)
  In Heap STL, the inbuilt heap is maxHeap implemented using priority queue 

*/
int main(){

    priority_queue<int, vector<int>> pq;      // maxHeap syntax
    pq.push(2);
    pq.push(4);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop();

    cout << pq.top() << endl;
    cout <<endl;
    
    priority_queue<int, vector<int> , greater<int> > pqmin;      // minHeap
    pqmin.push(5);
    pqmin.push(3);
    pqmin.push(1);

    cout << pqmin.top() << endl;
    return 0;
}