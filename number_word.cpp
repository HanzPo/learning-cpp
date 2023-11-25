// Use a map to map a number to the word (e.g. 1 -> "one")

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  int n;
  map<int, string> number_words = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};
  cin >> n;
  if (n < 1 || n > 9)
  {
    cout << "Invalid input";
  }
  else
  {
    cout << number_words[n];
  }
  return 0;
}