/*
CSC 134
M2HW1 - Bronze
Efrain Alvarado
2/23/2025
*/
// Question 1.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()


{
 
string firstname, lastname, acct;
double checkingBalance = 1000.0;
double savingsBalance = 5000.0; 
double bankBalance = 1802500.0;
string accountType;
int choice;


cout << "Hi, Welcome to Dtrusted Banks" << endl;
cout << "Here your money is not safe, but is good!" << endl;
cout << "How can we help? But first, ID." << endl;
cout << "Your last name please: " << endl; 
cin >> lastname;
cout << " And your first name: " << endl;
cin >> firstname;
cout << " Yes, hi " << firstname << " " << lastname << endl;
cout << "password please Mr./Mrs. " << lastname << " : " << endl;

string correctPassword = lastname;
string inputPassword;
int attempts = 3;

  while (attempts > 0)

                      {
    cout << "Enter password: ";
    cin >> inputPassword;

    if (inputPassword == correctPassword)

                                         {

        cout << "Access granted!" << endl;

                                          { 

          cout << "Choose account type (1 for savings, 2 for checking, 3 for Bank lucky day): ";
          cin >> choice;
         
          if (choice == 1 || choice == 2 || choice == 3)

              {

              double selectedBalance = (choice == 1) ? savingsBalance : checkingBalance;
              cout << "Current balance: $" << selectedBalance << endl;

              cout << "Do you want to (1) deposit or (2) withdraw or (3) give your money to the bank?: ";
              cin >> choice;

              double amount;
              
              if (choice == 1) 

              {

                  cout << "Enter deposit amount: $";
                  cin >> amount;
                  selectedBalance += amount;
                  cout << "Deposit successful!" << endl;

              }  

                else if (choice == 2) 

              {
                  cout << "Enter withdrawal amount: $";
                  cin >> amount;
                  if (amount <= selectedBalance) 

                  {
                      selectedBalance -= amount;
                      cout << "Withdrawal successful!" << endl;
                  }

                    else

                  {
                      cout << "Insufficient funds.the bank have your money." << endl;
                  }
              }
               
                else if (choice == 3)
              {

                  cout << " Bank lucky day and keeps all your money." << endl;
              }

                else
              {
                  cout << "Invalid choice,the bank keeps your money." << endl;
              }

              cout << "New balance: $" << selectedBalance << endl;

              if (choice == 1)

               {
                  savingsBalance = selectedBalance;
              }

               else

                {
                  checkingBalance = selectedBalance;
              }
          } 
            
            else 
            
            {
              cout << "Invalid account type,the bank keeps your money." << endl;
          }

          return 0;

          
          
            
          
       
          }   
            



        return 0;
    }
      else

       {
        attempts--;
        cout << "Incorrect password. You have " << attempts << " attempts left." << endl;
    }
}

cout << "You have been logged out and your acct deleted." << endl;


  


return 0;

}
