// CSC 134
// M2T1
// alvarado
// 1/29/2025


#include <iostream>

using namespace std;

int main()
{
    
    string name = "Alvarado";
    int num_apples = 10;
    double price_each = 0.25;
                     
    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "We have " << num_apples << " in stock" << endl;
    cout << "Each apple costs " << price_each << endl;

    double total_price = num_apples * price_each;

    cout << "The total price for all " << num_apples;
    cout << " is: $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;

    return 0;
}
