/*Write a C++ program to check two given integers, 
and return true if one of them is 30 or if their sum is 30.
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0
*/

#include <iostream>
using namespace std;

int main(){
    //get the numbers from the user
    int num1, num2, sum;
    cout << "Digite o primeiro numero: \n";
    cin >> num1;
    cout << "Digite o segundo numero: \n";
    cin >> num2;

    //verifies if one of em is 30
    if(num1 == 30 || num2 == 30){
        cout << true;
        return 0;
    }

    //get the sum of them
    sum = num1 + num2;

    if(sum == 30){
        cout << true;
        return 0;
    }

    cout << false;
    return 0;
}