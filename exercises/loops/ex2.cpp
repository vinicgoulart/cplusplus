/*Write a program in C++ to find the sum of first 10 natural 
numbers.
Sample Output:
Find the first 10 natural numbers:
---------------------------------------
The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55
*/

#include <iostream>
using namespace std;

int main(){
    // create a variable to store values;
    int storeValues;
    storeValues = 0;
    // create a for loop that goes from 1 to 10;
    for (int i = 1; i <= 10; i++){
        cout << i << " \n";
        storeValues = storeValues + i;
    }

    cout << storeValues;

    return 0;
}