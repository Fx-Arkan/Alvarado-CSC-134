#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();

int main() 

{
  
  int choice; 

 
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;


  if (1 == choice) { chooseDoor1(); }


  else if (2 == choice) { chooseDoor2(); }

  else { cout << "I'm sorry, that is not a valid choice." << endl; }


  cout << "Thank you for playing!" << endl;
  
  system("pause"); /* system function used for pause here, 
  I noticed in the small amount I read about 'system' that it is a very important function 
  and if not handled properly it creates a security vulnerability. */ 
  /* The reason why I'm using the function "system" is because at the end of a program,
  it goes so fast you don't get a chance to read what it says at the end before it closes the program*/
   

  return 0; 


} 

 void chooseDoor1() 
 {
  cout << "You chose Door 1" << endl;
  cout << "You win ... A NEW CAR!" << endl;
 }


void chooseDoor2() 
 {
  cout << "You chose Door 2" << endl;
  cout << "You win ... a bottle of floor wax." << endl;
 }
