#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double p, l;
	    cin >> p>> l;
	    int per = l/p*100;
	    cout<< (per>=75 ? "YES" : "NO")<<endl;
	}

}
