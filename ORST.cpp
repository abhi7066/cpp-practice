#include<iostream>
#include<algorithm>
#include<set>
using namespace std;


int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int arrSizeA, arrSizeB;
        cin >> arrSizeA >> arrSizeB;
        int arr_A[arrSizeA];
        for(int i=0; i<arrSizeA; i++){
            cin >> arr_A[i];
        }
        int maxi = 0;
        for(int i=0; i<arrSizeB; i++){
            int x;
            cin >> x;
            if(x>maxi)
            maxi = x;
        }
        multiset<int> st;
        for(int i=0; i<arrSizeA; i++){
            if(i<arrSizeA-maxi){
                cout << arr_A[i] << " ";
            }
            else{
                st.emplace(arr_A[i]);
            }
        }
        for(auto x : st){
            cout << x << " ";
        }
        cout << endl;
    }
}