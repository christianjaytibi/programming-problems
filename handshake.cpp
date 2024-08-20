/*
  Given T number of persons in a room, count the number of minimum handshakes
  that will occur if each person shook hands with everyone else at least once.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cout << (a[i] - 1) * a[i] / 2 << "\n";
  }

  return 0;
}
