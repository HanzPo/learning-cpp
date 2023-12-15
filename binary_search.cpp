#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

template <typename Number>
int binary_search(vector<Number> arr, Number target) {
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right) {
    int middle = floor((left + right) / 2);

    if (arr[middle] < target) {
      left = middle + 1;
    } else if (arr[middle] > target) {
      right = middle - 1;
    } else {
      return middle;
    }
  }

  return -1;
}

template <typename Number>
int binary_search_recursive(vector<Number> arr, Number target, int left = 0, int right = -1) {
  if (right == -1) {
    right = arr.size() - 1;
  }

  if (left > right) {
    return -1;
  }

  int middle = floor((left + right) / 2);

  if (arr[middle] > target) {
    return binary_search_recursive(arr, target, left, middle - 1);
  }
  else if (arr[middle] < target) {
    return binary_search_recursive(arr, target, middle + 1, right);
  }
  else {
    return middle;
  }

}

int main() {
  vector<double> sorted_numbers{3.3, 5.2, 6.0, 8.5, 11.9, 13.2, 16.5, 20.3, 21.1, 23.8};

  double search_num;

  while (search_num != 9999) {
    cin >> search_num;
    cout << binary_search_recursive(sorted_numbers, search_num) << endl;
  }

  return 0;
}
