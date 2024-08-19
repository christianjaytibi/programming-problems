/*
  Given a particular word, output the number of sequences defined in the n-gram
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;
  vector<pair<string, int>> dict;

  while (cin >> s >> n) {
    dict.push_back({s, n});
  }

  for (const auto &item : dict) {
    cout << item.first.length() - (item.second - 1) << "\n";
  }

  return 0;
}
