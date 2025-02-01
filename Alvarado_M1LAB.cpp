// CSC 134
// M1LAB
// EFRAIN ALVARADO
// 1/30/2025

#include <iostream>

using namespace std;

int main()

{

string name = "Alvarado";

int apples = 100;

double price_per_apple = 0.25;
double total_price = apples * price_per_apple;

cout << "Welcome to " << name;

cout << "'s apple orchard." << endl;

cout << "We have " << apples;
cout << " Apples in stock" << endl;
cout << "Apples are currently $";
cout << price_per_apple << " each." <<endl;
cout << "If you want them all, that will be $" << total_price << endl;

return 0;

}