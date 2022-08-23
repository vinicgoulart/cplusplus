/* Write a C++ program to create a new string where 'if' is added 
to the front of a given string. If the string already begins with 
'if', return the string unchanged.
Sample Input:
"if else"
"else"
Sample Output:
if else
if else 
*/

#include <iostream>
using namespace std;

int main(){
    //recover the string from the user -> getline
    string sentence;
    cout << "Digite a frase: \n";
    getline(cin, sentence);

    // check if 'if' is in the sentence;

    if(sentence[0] == 'i' && sentence[1] == 'f'){
        cout << sentence;
        return 0;
    }

    cout << "if " << sentence << " \n";
}