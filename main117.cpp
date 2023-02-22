#include <iostream>
using namespace std;

int main(void) {
  int N, A;
  cin >> N >> A;

  if (A >= (N % 500))
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
