/*Write a program in C++ to display n terms of natural number 
and their sum.
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28
*/

#include <iostream>
using namespace std;

int main(){
    //create a store numbers variable
    //create a variable to receive user's input
    int storedNumbers = 0;
    int userNumber;

    cout << "Digite a quantidade de termos que deve receber! \n";
    cin >> userNumber;

    for (int i = 0; i <= userNumber; i++){
        storedNumbers = storedNumbers + i;
    }

    cout << storedNumbers;
}