#include <iostream>

using namespace std;

int main() {

  int grades[6];
  int sum = 0;

  cout << "Please enter your top 6 grades, separated by spaces\n";

  for (int i = 0; i < (int) size(grades); i++) {
    cout << "Entering grade " << i + 1 << " of " << size(grades) << ": ";
    cin >> grades[i];
  }

  for (int i = 0; i < (int) size(grades); i++) {
    sum += grades[i];
  }

  cout << "Your top 6 average is: " << (double) sum / 6;
  
  return 0;
}