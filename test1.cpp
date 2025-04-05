#include <iostream>
#include <string>
using namespace std;
int main()
{ 
  
    int firstNum, number, answer;
    firstNum = 5;
    
    //secondNum = 1;
    //answer = firstNum * secondNum;
    cout << "5 times your number: ";
    cin >> number;
   
    
        answer = firstNum * number;
    cout << firstNum << " times " << number << " is " << answer << endl;
    
    
    
    return 0;
}