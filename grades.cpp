#include <iostream>

using namespace std;

int main() {

  int grades[6];
  int sum = 0;

  cout << "Please enter your top 6 grades, separated by spaces\n";

  for (int i = 0; i < 6; i++) {
    cout << "Entering grade " << i + 1 << " of " << 6 << ": ";
    cin >> grades[i];
  }

  for (int i = 0; i < 6; i++) {
    sum += grades[i];
  }

  cout << "Your top 6 average is: " << sum / 6;
  
  return 0;
}