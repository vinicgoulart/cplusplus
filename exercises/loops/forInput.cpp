//retrieves one number from the user
//do a for loop and print out all numbers till that one (0 is not included)

#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Digite o valor de x: \n";
    cin >> x;

    for (int i = 1; i <= x; i++){
        if(i % 3 == 0){ //verifies if it can be divided by 3
            cout << i << " \n"; //prints out the number in question
        }
        // cout << i << " \n";
    }

    return 0;
}