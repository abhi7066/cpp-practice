#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "K" <<setw(2) << setfill('0') << n%100;
}