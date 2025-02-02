// CSC 134
// M1HW1
// Efrain Alvarado
// 2/1/2025
#include <iostream>

using namespace std;

int main() 

/* Two of the main actors cast for this movie were Bruce Willis as Dr. Malcolm Crowe and
 Haley Joel Osment as Cole Sear. */

{
  
string mov;

mov = "The Sixth Sense."; //It took 6 months to film this movie.

double budget = 40;
double box_office = 675.8;
double willis = 14;
double weekly = 14000000 / 26;
double days;
double daily;

    cout << "One of my favorite movies is " << mov << endl;
    cout << "The budget for this movie was " << budget << " million dollars." << endl;
    cout << "The movie was released in 1999." << endl;
    cout << "At the box office they made an outstanding amount" << endl;
    cout << "of " << box_office << " million. Impressive!" << endl;
    cout << "Dr.Malcolm (Willis) was paid a total of " << willis << " million dollars." << endl;
    cout << "That's about " << weekly << " a week for 6 months. Sweet!" << endl;
    cout << "My Favorite scene is when the Dr. realized what happened." << endl;
    cout << "Movie quote by little Cole \"I see dead people.\" Scary! " << endl;
    cout << "Enter how many work days, to see pay per day: ";
    cin >> daily;
    days = weekly / daily;
    cout << "And the total per day is " << days << " thousand dollars." << endl;


    return 0;
}
