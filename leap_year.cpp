#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int year;
        cin >> year;
        if((year % 4 == 0 and year % 100 !=0) or (year%400==0))
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}