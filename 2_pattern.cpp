// WAP to draw following pattern on screen (5 marks)
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1


#include<iostream>
using namespace std;

int main(){
    int n=5;
    do{
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }while(n--);
}