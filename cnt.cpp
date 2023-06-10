#include <iostream>
using namespace std;

int count(int a[], int n){
    int i=0, cnt=0;
    while(i<=n-1){
        if(i==0 and a[i+1]<a[i]){
            cnt++;
        }
        else if(i==n-1 and a[i]>a[i-1]){
            cnt++;
        }
        else {
            if(a[i+1]<a[i] and a[i-1]<a[i])
            cnt++;
        }
        i++;
    }
    return cnt;
}


int main(){
    int a[]={2};
    int n=1;
    int ans = count(a, n);
    cout<<ans;

}