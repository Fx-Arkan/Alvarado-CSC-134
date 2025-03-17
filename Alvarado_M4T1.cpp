// CSC 134
// M4T1
// Efrain Alvarado
// 3/17/2025

#include <iostream> 
#include <string> 
#include <cmath>
#include <chrono> 
#include <ctime> 
#include <thread>// All these headers are for functions of virables in the program.  

using namespace std; 

int main() 
{ 
    srand(static_cast<unsigned int>(time(0)));// This is used to ensure compatibility, 
    int num1 = rand() % 10; //especially if the seed expects an unsigned value, like in srand.
    int num2 = rand() % 10; 
    int sum = num1 + num2; 
    
    cout << "Enter the answer of " << num1 << " + " << num2 << ": "; // asking user for solution.
    int totalsum;     
    int attempts = 0; 
    
    while (attempts < 3) //loop for attemts. 
    { 
        cin >> totalsum; // reads the input.

        if (sum == totalsum) 
        { 
            cout << "Good job, the total is " << sum << endl; 
            break; 
        } 
        else 
        { 
            attempts++; 
            if (attempts < 3) 
            { 
                cout << "wrong answer, try again "; 
            } 
            else 
            { 
                cout << "sorry, the correct answer is " << sum << endl; 
            }
        } 
    } 

    for (int i = 0; i < 10; ++i) // loop for ending.
    { 
        cout << "***                         " << (9 - i) << "                        ***" << endl; 
        this_thread::sleep_for(chrono::seconds(1));
    }
    
    cout << "********************************************************" << endl;
    cout << "                     That's all Folks!                  " << endl; 
    cout << "********************************************************" << endl;

    cout << "Press Enter to continue...";
    cin.ignore(); 
    cin.get();

    return 0; 
}
