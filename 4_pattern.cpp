// WAP to draw following alphabet pattern (5 marks)

// A
// A B
// A B C
// A B C D
// A B C D E


#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        char c=65;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}