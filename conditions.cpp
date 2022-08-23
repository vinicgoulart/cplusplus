//if statement
#include <iostream>
using namespace std;

int main(){
    int value1 = 33;
    int value2 = 34;

    if(value1 > value2){
        cout << "O valor 1 eh maior que o valor 2.";
        return 0;
    }//else statement could come here (else { ...code }) but i prefered not to do that

    cout << "O valor 2 eh maior que o valor 1. \n";

    //ternary operator

    int time = 10;

    string greetings = (time > 18) ? "Good night" : "Good day!";

    cout << greetings;

    return 0;
}