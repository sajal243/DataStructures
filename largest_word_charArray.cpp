#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();

    char a[n+1];
    cin.getline(a,n);  // to enter sentence in a variable otherwise compiler store each word in diff. var
    cin.ignore();      // to clear buffer like flush fxn
    int len = 0,mx =0;
    int i=0;
    int st =0, maxst = 0;
    while(1){
        if(a[i] == ' ' || a[i] == '\0'){
            if(len > mx){
                mx = len;
                maxst = st;        // starting indx of max.length
            }
            len =0;
            st = i+1;
        }
        else
            len++;
        if(a[i] == '\0')
            break;
        
        i++;
    }
    cout << mx<<endl;
    for(int i=0; i<mx; i++){
        cout << a[i+maxst];
    }

    return 0;
}