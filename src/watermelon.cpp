#include <bits/stdc++.h>
using namespace std;

void printIfEven(int w) {
  if (w % 2 == 0 && w > 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int w;
  cin >> w;
  printIfEven(w);
  return 0;
}
