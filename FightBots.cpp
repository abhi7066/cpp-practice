#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, bob_x, bob_y;
        cin >> n >> bob_x >> bob_y;
        string str;
        cin >> str;
        int alice_x = 0, alice_y = 0;
        bool bobWins = false;
        for (int i = 0; i < n; i++)
        {
            (str[i] == 'R') ? alice_x++ : (str[i] == 'L') ? alice_x--
                                      : (str[i] == 'U')   ? alice_y++
                                      : (str[i] == 'D')   ? alice_y--
                                                          : 0;
            int ans = abs(bob_x - alice_x) + abs(bob_y - alice_y);
            if(ans == i+1) bobWins = true;
        }

        if (bobWins)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}