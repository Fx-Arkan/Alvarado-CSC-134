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
int day =  weekly / 7;

    cout << "One of my favorite movies is " << mov << endl;
    cout << "The budget for this movie was " << budget << " millions." << endl;
    cout << "The movie was release the year 1999." << endl;
    cout << "At the box office they made an amazing amount" << endl;
    cout << "of " << box_office << " millions. Impressive!" << endl;
    cout << "Dr.Malcolm (Willis) was pay a total of " << willis << " millions." << endl;
    cout << "Thas about " << weekly << " a week for 6 month. Sweet!" << endl;
    cout << "Now, divide that per day " << day << endl;
    cout << "My Favorite scene is when the Dr. realize what happen" << endl;

    return 0;
}
