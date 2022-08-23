/*Write a C++ program to create a new string which is 4 copies of 
the 2 front characters of a given string. If the given string length 
is less than 2 return the original string.
Sample Input:
"C Sharp"
"JS"
"a"
Sample Output:
C C C C
JSJSJSJS
a
*/

#include <iostream>
using namespace std;

int main(){
    string givenString, newString, firstLetter, secondLetter, twoLettersString;

    cout << "Digite a string que desejas! \n";
    getline(cin, givenString);

    if(givenString.length() < 2){
        cout << givenString;
        return 0;
    }

    firstLetter = givenString[0];
    secondLetter = givenString[1];

    twoLettersString = firstLetter.append(secondLetter);
    newString = twoLettersString;

    cout << newString + newString + newString + newString + " \n";
    return 0;
}