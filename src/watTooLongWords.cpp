#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printAbbreviatedWords(vector<string> words) {
  for (auto s : words) {
    if (s.length() <= 10) {
      cout << s << endl;
    } else {
      char first = s[0];
      char last = s[s.length() - 1];
      int k = s.length() - 2;
      cout << first << k << last << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<string> words;
  for (int i = 0; i < n; i++) {
    string toPushBack;
    cin >> toPushBack;
    words.push_back(toPushBack);
  }
  printAbbreviatedWords(words);
}
