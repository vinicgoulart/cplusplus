/*Write a program in C++ to check whether a number is prime 
or not.
Sample Output:
Input a number to check prime or not: 13
The entered number is a prime number.
*/

#include <iostream>
using namespace std;

int main(){
    //receive the number from the user
    int number;

    cout << "Digite o numero! \n";
    cin >> number;

    if(number % 2 == 0){
        cout << "Odd number!";
        return 0;
    }

    cout << "Prime number!";
    return 0;
}