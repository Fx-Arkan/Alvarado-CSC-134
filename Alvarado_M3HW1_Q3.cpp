/*
CSC 134
M3HW1 - Silver
Efrain Alvarado
3/11/2025
*/
 // Question 3.
#include <iostream>
#include <string>
#include <cmath>// For pseudo-random numbers.    
#include <ctime>// For making it truly random.
using namespace std;

int main()
 {
    int seed = time(0);
    srand(seed);
   
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int sum = num1 + num2;

    cout << "Enter the sum of " << num1 << " and " << num2 << ": ";
    string total;
    cin >> total;
    
    int totalsum = stoi(total);
    if (sum == totalsum)
    {
        cout << "Good job, the total is " << sum << endl;
    } 
    else
    {
        cout << "Wrong, the answer is " << sum << " and yours is " << totalsum << endl;
    }

    cout << "That's all" << endl;
    cin.get(); // Pause the program

    return 0;
}
