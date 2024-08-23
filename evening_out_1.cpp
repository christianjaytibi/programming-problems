/*
    Evening Out 1 - Open Kattis
    Problem link: https://open.kattis.com/problems/eveningout1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  long a, b;
  cin >> a >> b;

  long count = 0;
  long mod = a % b;

  if (a == b) {
    count = 0;
  } else if ((b / 2) >= mod) {
    count = mod;
  } else {
    count = b - (a % b);
  }

  cout << count;

  return 0;
}
