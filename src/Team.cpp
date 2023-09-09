#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countNumberOfAgree(vector<vector<int>> views) {
  int count = 0;
  for (auto view : views) {
    int check = 0;
    for (auto single : view) {
      if (single == 1) {
        check += 1;
      }
    }
    if (check >= 2) {
      count += 1;
    }
  }
  cout << count;
}

int main() {
  vector<vector<int>> views;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> view;
    int a, b, c;
    cin >> a >> b >> c;
    view.push_back(a);
    view.push_back(b);
    view.push_back(c);
    views.push_back(view);
  }
  countNumberOfAgree(views);
  return 0;
}
