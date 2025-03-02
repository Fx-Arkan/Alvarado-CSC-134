// CSC 134
// M3LAB1
// Efrain Alvarado
// 3/1/2025


#include <iostream>
#include <string>
using namespace std;

void chooseDoor1();
void chooseDoor2();
void chooseDoor3();

int main() 

{
  
  int choice; 
  cout << "Do you choose Door 1, Door 2 or Door 3?" << endl;
  cout << "Type 1, 2 or 3: "; 
  cin >> choice;


  if (1 == choice) { chooseDoor1(); }


 else if (2 == choice) { chooseDoor2(); }

 else if (3 == choice) { chooseDoor3(); }

 else { cout << "I'm sorry, that is not a valid choice." << endl; }


  cout << "Thank you for playing!" << endl;
  
  system("pause"); /* system function used for pause here, 
  I noticed in the small amount I read about 'system' that it is a very important function 
  and if not handled properly it creates a security vulnerability. */ 
  /* The reason why I'm using the function 'system' is because at the end of a program,
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
  int hour;
  string suffix;
  string time = "evening my friend. You get nothing, try again";
  cout << "Type a number between 1 and 12" << endl;
  cin >> hour;
  cout << "is it am or pm? " << endl;
  cin >> suffix;
    
  { 
  if (suffix == "pm")
     { if ( hour < 6 )
        { time = "afternoon my friend. You get a Free trip, one way to Antartica!"; }
     }
     
     else 

    { time = "morning my friend. You win, a Trip to Wonka's Chocolate Factory!"; }
    }

  
   cout << "good " << time << endl;
  

 }

 void chooseDoor3() {
    static int repeatCounter = 0;  // Static variable to keep track of repeats
    //The 'static' and using 'repeatCounter' retains its value 
    // between multiple calls for 'chooseDoor3' function. This allows me to count 
    // how many times selecting 3 has been repeated.

    int choice;
    while (true) {
        cout << "Try again, Door 1, Door 2, or Door 3?" << endl;
        cout << "Type 1, 2, or 3: "; 
        cin >> choice;

        if (1 == choice) {
            chooseDoor1();
            repeatCounter = 0;  // Reset counter
            break;
        } else if (2 == choice) {
            chooseDoor2();
            repeatCounter = 0;  // Reset counter
            break;
        } else if (3 == choice) {
            repeatCounter++;        //3rd count
            if (repeatCounter > 3) 
            {  
                cout << "Really?" << endl;
            } 
            else if (repeatCounter > 1)
            {
                cout << "Can you make another selection? I can do this all day!" << endl;
            }
        } else {
            cout << "I'm sorry, that is not a valid choice." << endl;
            repeatCounter = 0;  // Reset counter
        }
    }
}

  