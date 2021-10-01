#include<iostream>
#include<string>
using namespace std;
int substrings(string A,string B){
    int n1 = A.length();
    int n2 = B.length();
    int l1 = n1*(n1+1)/2;
    int l2 = n2*(n2+1)/2;
    string arr[l1],arr2[l2];
    for(int i=0; i<n1; i++){
        for(int j=1; j<=n1-i; j++){
            arr[i] = A.substr(i,j);
            cout << arr[i] << endl;
        }
    }

    for(int i=0; i<n2; i++){
        for(int j=1; j<=n2-i; j++){
            arr2[i] = B.substr(i,j);
            cout << arr2[i] << endl;
        }
    }

    int count =0;
    for(int i=0; i<l1; i++){
        for(int j=0; j<l2; j++){
            if(arr[i]==arr2[j]){
                count ++;
                break;
    
            }
        }

    }
    cout << count;

    return l1 + l2 - count ; 
}
int main(){
    string A,B;
    cin >> A;
    cin >> B;
    cout << substrings(A,B) << endl;
    return 0;
}