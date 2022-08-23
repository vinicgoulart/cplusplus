// https://www.w3schools.com/cpp/cpp_user_input.asp -> 09/08

#include <iostream>
using namespace std;

int main(){
    int x; //declaring a variable without value
    cout << "Digite o numero que deseja ser printado! \n";
    cin >> x; //c (c in) uses extraction operator (>>) to get values
    cout << "Your value is " << x << "!"; //normal print.

    return 0;
}