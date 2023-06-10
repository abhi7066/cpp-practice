// C++ program to display Prime numbers 1 to till N
#include <bits/stdc++.h>
using namespace std;

// function to check if a given number is prime
bool isPrime(int n){
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int num = 0;
    cout << "Enter Number : ";
    cin >> num;
    for (int i = 1; i <= num; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }
    return 0;
}
