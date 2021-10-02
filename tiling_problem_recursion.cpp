#include<iostream>
using namespace std;
// no. of ways to tile(2 by 1 tile) to space(2 by n)
int countways(int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return countways(n-1) + countways(n-2);
    
}
int main(){
    int n;
    cin >> n;
    cout << countways(n) << endl; 
    return 0;
}