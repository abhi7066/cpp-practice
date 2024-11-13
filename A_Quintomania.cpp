// Both answers are correct

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> notes(n);

//     for (int i = 0; i < n; i++) {
//         cin >> notes[i];
//     }

//     bool isPerfect = true;
//     for (int i = 0; i < n - 1; i++) {
//         int interval = abs(notes[i] - notes[i + 1]);
//         if (interval != 5 && interval != 7) {
//             isPerfect = false;
//             break;
//         }
//     }

//     if (isPerfect)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            int temp = abs(arr[i] - arr[i + 1]);
            if (temp != 5 and temp != 7)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}