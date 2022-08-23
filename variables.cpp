#include <iostream>
using namespace std;

int main(){
    int number = 103; //this variable is an integer number
    double myAge = 30.05; //decimals
    char firstLetter = 'V'; // char store single letters (use '')
    string myName = "Vinicius Campos Goulart"; //strings (use "")
    bool goodAtCS = false; //boolean
    float height = 1.71; //decimals as well, not as precise as double

    //it is possible to create a variable and assign it's variable later

    string country;
    country = "Brazil";

    cout << number;
    cout << "\n";
    cout << myAge;
    cout << "\n";
    cout << firstLetter;
    cout << "\n";
    cout << myName;
    cout << "\n";
    cout << goodAtCS; // returns 0 because 0 = false
    cout << "\n";
    cout << "Eu sou " << myName << " e vivo no " << country << ". \n";

    int x = 5, y = 10, z; //assign the same type of variable to all
    // it is also possible to assign the same value to all variables
    //  x = y = z = 25;

    z = x + y;

    cout << "A soma de x + y eh de: " << z << ". \n";

    const double pi = 3.141596; //this is an float that will never change
    // because of the const it is assigned as read-only.

    cout << "Pi eh: " << pi << " \n";

    float f1 = 35e3; //float and double numbers accepts the 'e' shit

    cout << f1;

    return 0;
}