#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src, char dest, char help){
    if(n == 0){
        return;
    }
    towerOfHanoi(n-1,src,help,dest);
    cout << src << "to" << dest <<endl;
    towerOfHanoi(n-1,help,dest,src);

}
int main(){
    int n;
    char src,dest,help;
    cin >> n;
    cin >> src >> dest >> help;
    towerOfHanoi(n,src,dest,help);
    return 0;
}