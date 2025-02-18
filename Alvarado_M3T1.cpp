// M3T1
// CSC-134
// Efrain Alvarado 
// 2/18/2025


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

double width1, width2, length1, length2;

// I'm keeping it simple and just going straight to the task.
// Also trying to implement/practice my comments.

cout << "Hi, Rectangle-1 length please: ";
cin >> length1; //input.

cout << "next, the width please: ";
cin >> width1; //input.

cout << "your length is: " << length1 << endl;
cout << "and your width is: " << width1 << endl;
double area1 = length1 * width1; // calculating.
cout << "so, the rectangle-1 area is: " << area1 << endl;

// Next is the measurement of the second rectangle.

cout << "Now, Rectangle-2 length please: ";
cin >> length2; // input here.

cout << "next the width please: ";
cin >> width2; // input here.

cout << "you length is: " << length2 << endl;
cout << "and your width is: " << width2 << endl;
double area2 = length2 * width2; // calculating measurements.
cout << "Rectangle-2 area is: " << area2 << endl;

cout << "Rectangle-1 area is: " << area1 << " and Rectangle-2 area is: " << area2 << endl;

cout << "Thank you and have a Great Day!" << endl;

return 0;


}