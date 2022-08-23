#include <iostream>
#include <cmath> //math library - has a lot of funcs related to math
using namespace std;

int main(){
    int x = 10;
    int pi = 3;

    cout << max(x, pi) << " \n"; // finds the highest value;
    cout << min(x, pi) << " \n"; // finds the lowest value;

    cout << log(2) << " \n"; //logarithm function that can be used with cmath

    cout << cosh(x) << "\n";

    cout << sqrt(x) << " \n";
}