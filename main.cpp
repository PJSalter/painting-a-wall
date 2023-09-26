#include <iostream>
#include <cmath>   // Note: Needed for math functions in part (3)
#include <iomanip> // For setprecision
using namespace std;

int main()
{
    double wallHeight;
    double wallWidth;
    double wallArea;
    double paintGallons;
    int paintCansNeeded;

    cout << "Enter wall height (feet):" << endl;
    cin >> wallHeight;

    cout << "Enter wall width (feet):" << endl;
    cin >> wallWidth;
    // wallWidth = 10.0;               // FIXME (1): Prompt user to input wall's width

    // Calculate and output wall area
    wallArea = wallHeight * wallWidth; // FIXME (1): Calculate the wall's area
    // adding the "<< fixed << setprecision(2)" part to add the two decimal point to output a floating-point value.
    cout << "Wall area: " << fixed << setprecision(2) << wallArea << " square feet" << endl; // FIXME (1): Finish the output statement

    // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
    cin >> paintGallons;
    paintGallons = wallArea / 350;
    cout << "Paint needed: " << fixed << setprecision(2) << paintGallons << " gallons" << endl;
    // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
    paintCansNeeded = ceil(paintGallons); // rounded up with ceil function.

    cout << "Cans needed: " << paintCansNeeded << " can"
         << "("
         << "s"
         << ")" << endl;

    return 0;
}
