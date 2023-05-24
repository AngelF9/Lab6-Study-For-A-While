// prime.cpp
// Name:Angel Fuentes

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n <= 0) {
    cout << "invalid" << endl;
    return 1;
  }

  if (n == 1) {
    cout << "not prime" << endl;
    return 0;
  }

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "not prime" << endl;
      return 0;
    }
  }

  cout << "prime" << endl;
  return 0;
}
