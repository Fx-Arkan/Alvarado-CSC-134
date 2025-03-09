//CSC 134
//M3LAB2
//Efrain Alvarado
//3/9/2025
// Number Grade to Letter Grade Conversion Program
#include <iostream>
using namespace std;
int main()

{

int grade; // Variable declare for input of score

cout << "Welcome, what is your score?" << endl;// String asking user for the input of score
cin >> grade; // score input

if (grade <= 0 || grade >= 101) // or boolean use for keeping a specific numeric range for score. 

{
    cout << "Wrong value, try again." << endl; // if input not within range, alert something went wrong
}

else
// program determining each grade according to the score input by user. A, B, C, D, or F grade.
    
if (grade >= 90)
{
    cout << "with a score of " << grade << " you earned an A." << endl; // for grade A.
}

else if (grade >= 80)
{
    cout << "with a score of " << grade << " you earned a B." << endl; // for grade B.
}

else if (grade >= 70)
{
    cout << "with a score of " << grade << " you earned a C." << endl; // for grade C.
}

else if (grade >= 60)
{
    cout << "with a score of " << grade << " you earned a D." << endl; // for grade D.
}
   
else if (grade <= 59)  // for grade F.
{
    cout << "with a score of " << grade << " you got an F, better luck next time, don't give up." << endl;
}


/*This code pauses the program before exiting. We haven't covered cin.ignore and cin.get in class yet,
but Visual Studio Code creates an executable, and without the pause, the program window closes immediately
after running, so I don't get to see the output.*/
cout << "Press Enter to continue...";
cin.ignore(); // Clear the input buffer.
cin.get(); // cin creates the pause by waiting for input.


return 0;

}
