/*
CSC 134
M4HW1 - Bronze
Efrain Alvarado
4/5/2025
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    // declare variables
    int firstNum, secondNum, answer, total;
    firstNum = 5;

    //secondNum = 1;
    //answer = firstNum * secondNum;
  
  int i=1;
  while (i <= 10)
   {    
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
    i++;
   }

   cout << "Enter a number to multiply by 5: ";
   cin >> secondNum;

   total = firstNum * secondNum;
   cout << "The total is: " << total << endl;
   
    return 0;
}
