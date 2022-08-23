// https://www.w3schools.com/cpp/cpp_pointers.asp -> 16/08
// exercises = https://www.w3resource.com/cpp-exercises/basic/index.php;

#include <iostream>
using namespace std;

int main(){
    //a pointer is a variable that stores the memory address of another variable

    string myCar = "I don't have a fucking car!";
    string* myCarAV = &myCar; //the variable types must be the same

    cout << myCarAV << " \n"; // returns the memory address
    cout << *myCarAV << " \n"; // returns the value of "myCar"

    *myCarAV = "Fuck you"; //this will change the first variable's value

    cout << myCar;
}