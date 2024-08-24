/*
  Tok Tik - Open Kattis
  Problem link: https://open.kattis.com/problems/toktik
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long> m;
    
    string s;
    long a;
    while(n--) {
        cin >> s >> a;
        if (m.count(s)) {
            m[s] += a;
        }
        else {
            m[s] = a;
        }
    }

    auto maximum = max_element(
        m.begin(), m.end(), 
        [](const pair<string, long>& a, const pair<string, long>& b){
            return a.second < b.second;
        });
        
    cout << maximum->first;
    
    return 0;
}
