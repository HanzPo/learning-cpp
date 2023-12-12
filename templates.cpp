#include <iostream>

using namespace std;

template <typename number> number addNums(number a, number b) {
  return a + b;
}

int main() {
  int a, b;

  cin >> a >> b;

  cout << addNums(a, b);

  double c, d;

  cin >> c >> d;

  cout << addNums(c, d);

  return 0;
}