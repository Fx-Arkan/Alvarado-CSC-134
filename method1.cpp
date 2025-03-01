#include <iostream>
using namespace std.

void chooseDoor1();
void chooseDoor2();


int main()
{
 int choice;

cout << "choose door 1 or 2? " << endl;
cin >> choice;

if (1 == choice) { 
chooseDoor1();
}
else if (2 == choice) {
chooseDoor2();
}
else { cout << "sorry" << endl;
}

cout << "thanks" << endl;
return 0;
}






}