/* Write a program in C++ to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/

#include <iostream>
using namespace std;

int main(){
    double pi = 3.1415;
    double radius;
    double volume;

    radius = 6;
    volume = (4 * pi * (radius * radius * radius)) / 3;

    cout << volume;
}
