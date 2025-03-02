#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
   const double RATE = 5;
   const double INITIAL_BALANCE = 1875;
   const double TARGET = 600 + INITIAL_BALANCE;

   double balance = INITIAL_BALANCE;
   int year = 0;

   while (balance < TARGET)
   {  
      year++;
      double interest = balance * RATE / 100;
      balance = balance + interest;
   }
   cout << fixed << setprecision(2);
   cout << "The investment after "
      << year << " years is " << balance << endl;

   return 0;
}
