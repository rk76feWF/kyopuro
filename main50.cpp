#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, sum = 0, ok = 1;
  cin >> N >> X;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    sum += a;
    if (sum > X) break;
    ok++;
  }
  cout << ok << endl;
}
