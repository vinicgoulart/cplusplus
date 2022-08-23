/*Write a C++ program to create a new string with the last char 
added at the front and back of a given string of length 1 or more.
Sample Input:
"Red"
"Green"
"1"
Sample Output:
dRedd
nGreenn
111
*/

#include <iostream>
using namespace std;

int main(){
    //get a string
    string word, reformedWord, lastLetter;
    // char , lastLetter;
    cout << "Digite a palavra aí: \n";
    cin >> word;

    //verifies if the string length is greater than zero
    if(word.length() <= 0){
        cout << "Por favor digite uma palavra! \n";
        return 0;
    }

    // get the last char
    lastLetter = word.substr((word.length() - 1), 1);

    // add the last char to the end of the string

    cout << lastLetter + word + lastLetter;
}