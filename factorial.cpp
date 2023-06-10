// WAP to find factorial of a number using simple loop and then using recursion

#include<iostream>
using namespace std;

//factorial using loop
int fact1(int n){
    int fact=1;
    for(int i=1 ; i<=n ; i++){
        fact*=i;
    }
    return fact;
}
//factorial using recursion
int fact2(int n){
    if(n==0 or n==1)
    return 1;
    else
    return n*fact2(n-1);
}

int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;
    cout<<"Factorial by loop is "<<fact1(num)<<endl;
    cout<<"Factorial by recursion is "<<fact2(num);
    return 0;
}
