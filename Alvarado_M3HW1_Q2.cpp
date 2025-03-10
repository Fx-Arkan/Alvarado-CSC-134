/*
CSC 134
M3HW1 - Silver
Efrain Alvarado
3/10/2025
*/
 // Question 2. Pizzeria Recipt ( use apple store one, but in combination with if/else)

 
 #include <iostream>
 #include <string>
 #include <iomanip> 
 
 using namespace std;
 
 int main() 
 {
    // Variables declaration
     string customer, dining, size, tipInStr, tipOutStr;
     double large = 15.00;
     double small = 8.00;
     double tipIn = 0.15;
     double tipOut = 0.10;
     double tax = 0.07;
 
     // welcoming the customer and asking for their name
     cout << "Hi, Welcome to Bocephus Pizzeria" << endl;
     cout << "The best only cheese pizza in the world." << endl;
     cout << "My name is Mr. Bocephus. What is your name? " << endl;
     cin >> customer;
     cout << "Thank you for choosing us, " << customer << " party." << endl;
 
     // Showing the menu prices including tax
     cout << "Here is our menu. Price of large size is $15.00 plus 7 percent tax and" << endl;
     cout << "price for a small size is $8.00 plus 7 percent tax." << endl;
     cout << "Also, we want you to know we add a 15 percent tip for dining in and a 10 percent tip for take-outs." << endl;
 
     
     cout << "Now, will you be dining in or out? (in/out)" << endl;
     cin >> dining;
 
     if (dining == "in") 
     {
               // dining in, ask for pizza size and calculate total with tip
         cout << "Thank you, we will get you a table as soon as one is available." << endl; 
         cout << "Meanwhile, what would be your pizza size? (large/small)" << endl; 
         cin >> size;
 
         double subtotal, totalTip, totalTax, total;
         if (size == "large") 
         {
             subtotal = large;
             totalTip = large * tipIn;
             totalTax = large * tax;
         }
         else if (size == "small") 
         {
             subtotal = small;
             totalTip = small * tipIn;
             totalTax = small * tax;
         }
         else 
         {
             cout << "Invalid size option selected." << endl;
             return 0;
         }
         
         total = subtotal + totalTip + totalTax;
         // Print the receipt
         cout << "\n--- Receipt ---" << endl;
         cout << "Customer: " << customer << endl;
         cout << "Dining: In" << endl;
         cout << "Pizza Size: " << size << endl;
         cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
         cout << "Tax (7%): $" << fixed << setprecision(2) << totalTax << endl;
         cout << "Tip (15%): $" << fixed << setprecision(2) << totalTip << endl;
         cout << "Total: $" << fixed << setprecision(2) << total << endl;
         cout << "Thank you, come again!" << endl;
     }
     else if (dining == "out") 
     {
             // dining out, ask for pizza size and calculate total with tip
         cout << "Thank you, we will prepare your order for takeout." << endl; 
         cout << "What would be your pizza size? (large/small)" << endl; 
         cin >> size;
 
         double subtotal, totalTip, totalTax, total;
         if (size == "large") 
         {
             subtotal = large;
             totalTip = large * tipOut;
             totalTax = large * tax;
         }
         else if (size == "small") 
         {
             subtotal = small;
             totalTip = small * tipOut;
             totalTax = small * tax;
         }
         else 
         {
             cout << "Invalid size option selected." << endl;
             return 0;
         }
 
         total = subtotal + totalTip + totalTax;
         // Print the receipt
         cout << "\n--- Receipt ---" << endl;
         cout << "Customer: " << customer << endl;
         cout << "Dining: Out" << endl;
         cout << "Pizza Size: " << size << endl;
         cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
         cout << "Tax (7%): $" << fixed << setprecision(2) << totalTax << endl;
         cout << "Tip (10%): $" << fixed << setprecision(2) << totalTip << endl;
         cout << "Total: $" << fixed << setprecision(2) << total << endl;
         cout << "Thank you, come again!" << endl;
     }
     else 
     {
         cout << "Invalid dining option selected." << endl;
     }
 
     return 0;
 }
 
