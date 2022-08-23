#include <iostream>
using namespace std;

int main(){
    int i = 0; //count this up to do the loop

    while (i <= 10){ //basic while condition
        cout << i << " \n"; //printing i
        i++; //adding i 1, so it will reach 10
    }

    //do while loop, execute the code block once before checking if it's true or not
    //after this, its going to execute until the condition is no longer true

    cout << "Do while prints \n";

    int x = 0;
    do {
        cout << x << " \n";
        x++;
    }while (x <= 5);
}