// WAP to draw downward triangle pattern as shown below (5 marks)
// * * * * *
// * * * * 
// * * * 
// * * 
// *


#include<iostream>
using namespace std;

int main(){
    int n=5,m=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"* "; 
        }
        m--;
        cout<<endl;
    }
}