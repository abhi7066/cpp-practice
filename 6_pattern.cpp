// WAP to print below given pattern (5 marks)
// J
// A A A
// V V V V V
// A A A A A A A


#include<iostream>
using namespace std;

int main(){
    char c[]={'J','A','V','A'};
    int n=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<n;j++){
            cout<<c[i]<<" ";
        }
        n+=2;
        cout<<endl;
    }
}