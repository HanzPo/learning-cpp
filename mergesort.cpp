#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>

using namespace std;

template <typename Number>
vector<Number> merge_sorted_arrays(vector<Number> arr1, vector<Number> arr2) {
  int i = 0, j = 0;
  
  vector<Number> merged;

  while (i < (int) arr1.size() && j < (int) arr2.size()) {
    if (arr1[i] <= arr2[j]) {
      merged.push_back(arr1[i]);
      i++;
    }
    else if (arr1[i] > arr2[j]) {
      merged.push_back(arr2[j]);
      j++;
    }
  }

  while (i < (int) arr1.size()) {
    merged.push_back(arr1[i]);
    i++;
  }

  while (j < (int) arr2.size()) {
    merged.push_back(arr2[j]);
    j++;
  }

  return merged;
}

template <typename Number>
vector<Number> merge_sort(vector<Number> arr) {
  if ((int) arr.size() <= 1) {
    return arr;
  }

  vector<Number> left;
  vector<Number> right;

  for (int i = 0; i < (int) arr.size(); i++) {
    if (i < (int) arr.size() / 2) {
      left.push_back(arr[i]);
    }
    else {
      right.push_back(arr[i]);
    }
  }

  left = merge_sort(left);
  right = merge_sort(right);

  return merge_sorted_arrays(left, right);
}

int main() {
  vector<int> input;

  for (int i = 0; i < 100; i++) {
    input.push_back(rand() % 1000);
  }

  cout << "Unsorted Vector: ";

  for (int i = 0; i < (int) input.size(); i++) {
    string endstr = i == (int) input.size() - 1 ? "" : ", ";
    cout << input[i] << endstr;
  }

  cout << endl << endl;

  input = merge_sort(input);

  cout << "Sorted Vector: ";

  for (int i = 0; i < (int) input.size(); i++) {
    string endstr = i == (int) input.size() - 1 ? "" : ", ";
    cout << input[i] << endstr;
  }

  return 0;
}