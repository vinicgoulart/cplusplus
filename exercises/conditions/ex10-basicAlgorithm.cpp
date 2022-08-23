/*Write a C++ program to check if a given positive number 
is a multiple of 3 or a multiple of 7.
Sample Input
3
14
12
37
Sample Output:
1
1
1
0
*/

#include <iostream>
using namespace std;

int main(){
    //receive a given integer
    int number;
    cout << "Digite o numero \n";
    cin >> number;

    //verifies if it is multiple of 3

    if(number % 3 == 0 || number % 7 == 0){
        cout << true;
        return 0;
    }

    cout << false;
    return 0;
}