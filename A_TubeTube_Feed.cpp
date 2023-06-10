#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n, t;
        cin >> n >> t;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int max_entertainment = -1;
        int max_index = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] <= t) {
                if (b[i] > max_entertainment) {
                    max_entertainment = b[i];
                    max_index = i + 1;
                }
            }
        }

        if (max_index == -1) {
            cout << -1 << endl;
        } else {
            cout << max_index << endl;
        }
    }

    return 0;
}
