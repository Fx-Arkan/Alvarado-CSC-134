#include <iostream>
#include <cmath>
using namespace std;

double cube_volume(double side_length)
 {
    return side_length * side_length * side_length; // Formula for cube volume
 }

int main()
{


    double result1 = cube_volume(2);
    double result2 = cube_volume(10);
    cout << "A cube with side length 2 has volume " << result1 << endl;
    cout << "A cube with side length 10 has volume " << result2 << endl;


    return 0;
}