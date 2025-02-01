// CSC 134
// M1HW1
// Efrain Alvarado
// 2/1/2025
#include <iostream>

using namespace std;

int main() 

/* Two of the main cast for this movie was Bruce Willis as Dr. Malcolm Crowe and
 Haley Joel Osment as Cole Sear. */

{
  
string mov;

mov = "The Sixth Sense."; //It took 6 month to film this movie.

int budget = 40;
int box_office = 676;
int willis = 14;
int weekly = 14000000 / 26;
int days;
double daily;

    cout << "One of my favorite movies is " << mov << endl;
    cout << "The budget for this movie was " << budget << " millions." << endl;
    cout << "The movie was release the year 1999." << endl;
    cout << "At the box office they made an amazing amount" << endl;
    cout << "of " << box_office << " millions. Impressive!" << endl;
    cout << "Dr.Malcolm (Willis) was pay a total of " << willis << " millions." << endl;
    cout << "That's about " << weekly << " a week for 6 month. Sweet!" << endl;
    cout << "My Favorite scene is when the Dr. realized what happened." << endl;
    cout << "Enter how many work days, to see pay per day: ";
    cin >> daily;
    days = weekly / daily;
    cout << "And the total per day is " << days << " thousand." << endl;


    return 0;
}
