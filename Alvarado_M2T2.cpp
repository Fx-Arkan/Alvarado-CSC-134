// CSC 134
// M2T2
// Efrain Alvarado
// 2/9/2025

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
  string name;
  double each = 0.50 + 0.02;
  double costumer; 
  cout << "Hi, Welcome to Alvarado's Apple Store" << endl;
  cout << "My name is Mr. E. What is your name? " << endl;
  cin >> name;
  cout << "Price of apples today is 0.50 cents each." << endl;
  cout << "How many apples are you purchasing today dear " << name << "?" << endl;
  cin >> costumer;
  double total = costumer * each;

  cout << fixed <<setprecision(2);
  cout << "Your total is: $" << total << endl;

  int age;
  cout << "and what is your age: ";
  cin >> age; 
  cout << "Sorry, but also your age is added to the price." << endl;
  double balance = age * total;
  cout << "your adjusted balance now is: $" <<  balance << endl;
  cout << "Thank You for shopping with us," << name << ". please come again." << endl;
  
  return 0;

}