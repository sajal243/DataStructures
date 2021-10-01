#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag = 0;
    cout << "Enter a no. :  "<< endl;
    cin >> n;
    for(int i =2; i<sqrt(n); i++){
        if(n%i == 0){
            cout << "it is not a prime no." << endl;
            flag =1;
            break;
        }
    }
    if(flag == 0){
        cout << "It is a prime no."<< endl;
    }
    return 0;
}