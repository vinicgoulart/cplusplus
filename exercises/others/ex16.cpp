/*Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6 --> get those variables + pi
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32 
use the formula: V = pi*(r^3)*h
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi = 3.1415;
    double radius, height, volume, finalRadius;

    radius = 6;
    height = 8;
    finalRadius = pow(radius, 2);

    volume = pi * finalRadius * height;

    cout << volume;

    return 0;
}

