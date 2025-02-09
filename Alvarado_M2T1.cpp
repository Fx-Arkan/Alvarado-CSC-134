// CSC 134
// M2T1
// Efrain Alvarado
// 2/9/2025


#include <iostream>

using namespace std;

int main()
{
    // variables are like mailboxes
    string name = "Alvarado";      // my name!
    int num_apples = 10;           // int are like whole numbers, so 3, or 1000000, but not 3.5
    double price_each = 0.25;      // double stands for floating point. 
                                   // double are like numbers like 3.5 on 11.002
                                   
                     
    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "We have " << num_apples << " in stock" << endl;
    cout << "Each apple costs " << price_each << endl;

    double total_price = num_apples * price_each;

    cout << "The total price for all " << num_apples;
    cout << " is: $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;

    return 0;
}
