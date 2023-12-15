#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

template <typename Number> int binary_search (vector<Number> arr, Number target) {
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right) {
    int middle = floor((left + right) / 2);

    if (arr[middle] < target) {
      left = middle + 1;
    }
    else if (arr[middle] > target) {
      right = middle - 1;
    }
    else {
      return middle;
    }
  }

  return -1;
}

int main() {

  vector<int> sorted_numbers {3, 5, 6, 8, 11, 13, 16, 20, 21, 23};

  cout << binary_search(sorted_numbers, 6);

  return 0;
}

