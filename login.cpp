#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  int option;
  bool logged_in = false;
  
  cout << "Welcome to Generic Login System! Please select an option\n1) Log into existing account\n2) Register new account\n->";
  cin >> option;

  if (option == 1) {
    string username;
    string password;

    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    cout << username << " " << password;
  }
  else if (option == 2) {
    ofstream accounts;
    string username;
    string password;

    accounts.open("accounts.csv", ios::app);

    cout << "New account username: ";
    cin >> username;
    cout << "New account password: ";
    cin >> password;

    accounts << username << "," << password << "\n";
    accounts.close();

    cout <<"Account created!";
  }
  else {
    cout << "Invalid input\n";
  }

  return 0;
}