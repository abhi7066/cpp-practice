#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }

        vector<int> arr1;
        for (int i = 0; i < n; i++){
            if (arr[i] < m and i + 1 != n){
                arr1.push_back(arr[i] + arr[i + 1]);
                i++;
            }
            else{
                arr1.push_back(arr[i]);
            }
        }

        vector<int> arr2;
        for (int i = arr1.size()-1; i >= 0; i--){
            if (arr1[i] < m and i - 1 >= 0){
                arr2.push_back(arr1[i] + arr1[i - 1]);
                i--;
            }
            else{
                arr2.push_back(arr1[i]);
            }
        }

        cout << arr2.size() << endl;
    }
}
