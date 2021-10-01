/*
Catlan Numbers --- these are the sequence of natural numbers that occur in various
counting problem(eg. how many valid BST formed using given set of numbers) often involving recursively 
defined objects

Cn = (1/n+1) 2nCn =  sigma ( Ci Cn-i) , i =0 to n-1
Catalan Sequence ---
          C0 = 1
          C1 = 1
          C2 = C0C1 + C1C0 = 2
          C3 = C0C2 + C1C1 + C2C0 = 5

  ** imp *** ---        1st coffecient --- 0 to n-1
                       2nd coeffecient --- n-1  to 0
*/

/*
  Applications ---
  1. Possible BSTs
  2. Paranthesis / bracket combinations
  3. Possible forests
  4. Ways of triangulations
  5. Possible paths in matrix
  6. Divinding a circle using N chords
  7. Dyck words of given length ... etc
*/



#include<bits/stdc++.h>
using namespace std;

int catalan(int n){
    if(n <= 1){
        return 1;             
    }

    int res = 0;
    for(int i= 0; i<n; i++){
        res += catalan(i) * catalan(n-i-1);
    }

    return res;
}

int main(){
    cout << "Catalan val :" << catalan(4) << endl;
    return 0;
}

