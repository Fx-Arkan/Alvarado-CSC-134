#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    // declare variables
    int firstNum, secondNum, answer;
    firstNum = 5;

    //secondNum = 1;
    //answer = firstNum * secondNum;
  
  for (int i=1; i<= 10; i++)
   {    
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
    
   }
   
    return 0;
}
