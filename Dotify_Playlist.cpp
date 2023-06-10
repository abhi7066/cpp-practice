#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, l;
    cin >> n >> k >> l;
    map<int, int> song_lengths;
    for (int i = 0; i < n; i++) {
      int minutes, lang;
      cin >> minutes >> lang;
      if (lang == l) {
        song_lengths[minutes]++;
      }
    }
    if (song_lengths.empty()) {
      cout << -1 << endl;
      continue;
    }
    vector<pair<int, int>> songs;
    for (auto& p : song_lengths) {
      songs.push_back({p.first, p.second});
    }
    sort(songs.begin(), songs.end(), greater<pair<int, int>>());
    int total_length = 0;
    for (int i = 0; i < k; i++) {
      total_length += songs[i].first * songs[i].second;
    }
    cout << total_length << endl;
  }
  return 0;
}
