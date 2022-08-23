/*Write a C++ program to compute the sum of the two given integer 
values. If the two values are the same, 
then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/

#include <iostream>
using namespace std;

int main(){
    //set 2 variables (int) and ask em
    int num1, num2;
    cout << "Digite o valor do primeiro numero!" << " \n";
    cin >> num1;
    cout << "Digite agora o valor do segundo numero" << " \n";
    cin >> num2;

    //verify if the numbers are different

    if( num1 != num2 ){
        cout << num1 + num2;
        return 0;
    }

    cout << (num1 + num2) * 3;

    return 0;
}