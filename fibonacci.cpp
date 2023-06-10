// C++ program to create fibonacci series till n number
#include <iostream>
using namespace std;

int main(){
    int sum = 0, num;
    int a = 0;
    int b = 1;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Fibonacci series : ";

    while (sum <= num){
        cout << sum << " ";
        a = b;       // swap elements
        b = sum;
        sum = a + b; // next term is the sum of the last two terms
    }
    return 0;
}
