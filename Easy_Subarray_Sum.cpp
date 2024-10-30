#include<iostream>
#define ll long long int
using namespace std;


int main(){
    int  t;
    cin >> t;
    while(t--){
        ll n, neg = 0, sum =0, neg_sum=0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x < 0){
                neg++;
                neg_sum+=x;
            }
            sum += x;
        }
        if(sum >= 0){
            cout << neg << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}