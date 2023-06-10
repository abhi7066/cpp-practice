// WAP to print below given pattern (5 marks)
//       *
//     * *
//   * * *
// * * * *


#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j==i or j>i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}