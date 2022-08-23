/*Write a C++ program to check whether three given integer values 
are in the range 20..50 inclusive. Return true if 1 or more of them 
are in the said range otherwise false.
Sample Input:
11, 20, 12
30, 30, 17
25, 35, 50
15, 12, 8
Sample Output:
1
1
1
0
*/

#include <iostream>
using namespace std;

int main(){
    // receive all three numbers
    int number1, number2, number3;

    cout << "Digite o primeiro número \n";
    cin >> number1;
    cout << "Digite o segundo número \n";
    cin >> number2;
    cout << "Digite o terceiro número \n";
    cin >> number3;

    //verify if at least one of em is between 20 and 50
    if(number1 >= 20 && number1 <= 50){
        cout << true;
        return 0;
    }

    if (number2 >= 20 && number2 <= 50){
        cout << true;
        return 0;
    }

    if (number3 >= 20 && number3 <= 50){
        cout << true;
        return 0;
    }

    cout << false;
    return 0;
}