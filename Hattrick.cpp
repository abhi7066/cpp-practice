#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt = 0;
        bool flag = false;
        for(int i=0; i<6; i++){
            char x;
            cin >> x;
            if(x==87){                  // ASCII Value of W = 87
                cnt++;
                if(cnt>=3) flag = true;
            }
            else{
                cnt = 0;
            }
        }
        (flag ? cout<<"YES" : cout<<"NO") << endl;
    }
}