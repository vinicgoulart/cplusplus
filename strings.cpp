// https://www.w3schools.com/cpp/cpp_strings.asp -> 10/08

#include <iostream>
#include <string>
using namespace std;

int main(){
    string greetin = "Hello, ";
    // cout << greetin;

    //string concatenation
    string firstName = "Vinicius";
    string lastName = "Goulart";
    //strings are objects, which has it's own properties and funcs

    string championship = "2016 Major ";
    string finalist1 = "Natus Vincere";
    string finalist2 = "Luminosity Gaming";

    //append lets us concatenate 2 strings.
    string champion = championship.append(finalist2);

    cout << champion + " \n";

    cout << firstName + " " + lastName + " \n";

    //you cannot add a string and a number (error)
    // int age = 18;
    // string textAge = "My age is: ";
    // string fullTextAge = textAge + age;

    //string length

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << alphabet.length() << " \n";

    //to access unique caracters in the string
    // alphabet[21] = 'A'; (changes the value of v to a)
    char firstLetter = alphabet[21];
    cout << firstLetter << " \n";

    //when getting user input strings, use getline, since cin terminates the shit when there's a whitespace

    string yourFullName;
    cout << "Please type your full name: \n";
    getline(cin, yourFullName); //takes cin and the variable as param.
    cout << "Your full name is: " + yourFullName + " \n";
}