// Implementation of the fibonacci sequence using recursion

#include <stdint.h>
#include <cmath>
#include <iostream>

#define int long long

using namespace std;

unsigned int fib(unsigned int n) {
  return (int) round((pow(1.0 + sqrt(5.0), n)-pow(1.0 - sqrt(5.0), n))/(pow(2.0, n) * sqrt(5.0)));
}

int32_t main() {
  unsigned int n;
  char input;

  cout << "Would you like to\n1) Generate a sequence up to n\n2) Get the nth "
          "number in the fibonacci sequence\nEnter 1 or 2 ->";
  cin >> input;

  if (input == '1') {
    cout << "This program will print the fibonacci sequence up to n\nn = ";
    cin >> n;
    for (unsigned int i = 1; i <= n; i++) {
      cout << fib(i) << " ";
    }
  } else if (input == '2') {
    cout << "This program will provide the nth number in the fibonacci "
            "sequence\nn = ";
    cin >> n;
    cout << fib(n);
  } else {
    cout << "Not a valid option :(";
  }

  return 0;
}
