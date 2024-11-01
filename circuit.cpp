#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> switches(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> switches[i];
        }

        int cnt0 = 0;
        for (int i = 0; i < 2 * n; ++i) {
            cnt0 += switches[i];
        }

        cout << (cnt0 % 2) << " " << min(cnt0, 2 * n - cnt0) << endl;
    }

    return 0;
}