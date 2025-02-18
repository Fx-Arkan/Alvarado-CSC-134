// M3T2
// CSC-134
// Efrain Alvarado 
// 2/17/2025

/* On this one, I'm building on top of the previous assignment and continuing to work 
on the program by adding extra questions for the user.*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{

double width1, width2, length1, length2;

cout << "Hi, the r stands for Rectangle. r1 length please: ";
cin >> length1;
cout << "next, the width please: ";
cin >> width1;
cout << "your length is: " << length1 << endl;
cout << "and your width is: " << width1 << endl;
double area1 = length1 * width1;
cout << "so, r1 area is: " << area1 << endl;


cout << "Now, r2 (Rectangle 2) length please: ";
cin >> length2;
cout << "next the width please: ";
cin >> width2;
cout << "you length is: " << length2 << endl;
cout << "and your width is: " << width2 << endl;
double area2 = length2 * width2;
cout << "r2 area is: " << area2 << endl;
cout << "r1 area is: " << area1 << " and r2 area is: " << area2 << endl;
string larger, r1, r2, Correct, Worng;
cout << "which one is larger, r1 or r2? " << endl;
cin >> Correct;
if (area1 > area2)
{
    cout << "r1 is the correct answer." << endl;
}
else if (area1 < area2)
{
    cout << "r2 is the correct answer." << endl;
}

cout << "well done!" << endl;
cout << "Thank you and have a Great Day!" << endl;

return 0;


}