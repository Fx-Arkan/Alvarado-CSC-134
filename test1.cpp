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
  
  for (int i=1; i<= 10; i++)
   {    
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
    
   }

   cout << "Enter a number to multiply by 5: ";
   cin >> secondNum;

   total = firstNum * secondNum;
   cout << "The total is: " << total << endl;
   
    return 0;
}
