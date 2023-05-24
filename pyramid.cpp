// pyramid.cpp
// Name:Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n < 0) {
    cout << "invalid" << endl;
    return 1;
  }

  for (int i = 0; i < n; i++) {
    int j = 1;
    while (j <= i) {
      cout << j;
      j++;
    }
    while (j > 0) {
      cout << j;
      j--;
    }
    cout << endl;
  }

  return 0;
}
