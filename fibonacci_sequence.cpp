// Implementation of the fibonacci sequence using recursion

#include <iostream>

using namespace std;

unsigned int fib(unsigned int n)
{
  if (n < 1)
  {
    return -1;
  }

  if (n == 1 || n == 2)
  {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main()
{
  unsigned int n;
  char input;

  cout << "Would you like to\n1) Generate a sequence up to n\n2) Get the nth number in the fibonacci sequence\nEnter 1 or 2 ->";
  cin >> input;

  if (input == '1')
  {
    cout << "This program will print the fibonacci sequence up to n\nn = ";
    cin >> n;
    for (unsigned int i = 1; i <= n; i++)
    {
      cout << fib(i) << " ";
    }
  }
  else if (input == '2')
  {
    cout << "This program will provide the nth number in the fibonacci sequence\nn = ";
    cin >> n;
    cout << fib(n);
  }
  else {
    cout << "Not a valid option :(";
  }

  return 0;
}
