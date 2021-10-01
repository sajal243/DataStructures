#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int pages[], int min, int n ,int m){
    int studentReq = 1, sum = 0;

    for(int i=0; i<n; i++) {
        if(pages[i] > min){
            return false;
        }

        if(sum + pages[i] > min){
            studentReq++;
            sum = pages[i];

            if(studentReq > m){
                return false;
            }
        }
        else{
            sum += pages[i];
        }
    }

    return true;
}

int pageAllocation(int pages[], int stud, int n){

    if(stud > n){
        return -1;
    }
    
    int sum = 0;
    for(int i= 0; i<n; i++){
        sum = sum + pages[i];
    }

    int start = 0, end = sum, ans = INT_MAX;
    while(start <= end){
        int mid = (start + end) / 2;
        if(isfeasible(pages, mid, n, stud)){
            ans = min(ans, mid);
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }

    return ans;

}
int main(){
    int pages[] = {12,34,67,90};
    int stud = 2;
    cout << pageAllocation(pages, stud, 4) << endl;
    return 0;
}