#include<iostream>
using namespace std;
int main(){
    char a[100] = "The king of fruits : Mango";
    int i =0;
    while(a[i] != '\0'){          
        cout << a[i]<<"\n" ;    
        i++;
    }
    return 0;
}