#include <iostream>
#include <string>
using namespace std;
int main()
{ 
  
    int firstNum, number, answer;
    firstNum = 5;
    //secondNum = 1;
    //answer = firstNum * secondNum;
    cout << "5 times your number: " << endl;
    for (int i=1; i<= 5; i++)
    {  
        answer = firstNum * i;
    cout << firstNum << " times your number " << i << " is " << answer << endl;
    }
    
    
    return 0;
}