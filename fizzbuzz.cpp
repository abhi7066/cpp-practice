#include<iostream>
using namespace std;

int main(){
    int n = 50;
    for(int i=1;i<=n;i++){
        if(i%3==0 and i%5==0)
            cout<<"FIZZBUZZ"<<endl;
        else if(i%3==0)
            cout<<"FIZZ"<<endl;
        else if(i%5==0)
            cout<<"BUZZ"<<endl;
        else 
            cout<<i<<endl;
    }
}
