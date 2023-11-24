#include <iostream>

using namespace std;

int main () {
  int number = 5;
  int *pNumber = &number;
  cout << *pNumber;
  return 0;
}