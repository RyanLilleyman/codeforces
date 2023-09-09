#include <bits/stdc++.h>
using namespace std;

void printDanger(string input) {
  int count = 0;
  for (int j = 0; j < input.length(); j++) {
    if (j != 0 && input[j] != input[j - 1]) {
      count = 1;
    } else {
      count += 1;
    }
    if (count >= 7) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  string input;
  cin >> input;
  printDanger(input);
  return 0;
}
