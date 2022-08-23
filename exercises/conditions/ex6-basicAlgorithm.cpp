/* Write a C++ program to remove the character in a given position 
of a given string. The given position will be in the range 0..string 
length -1 inclusive.
Sample Input:
"Python", 1
"Python", o
"Python", 4
Sample Output:
Pthon
ython
Pythn
*/

#include <iostream>
using namespace std;

int main(){
    //ask for the string
    string sentence;
    cout << "Digite a frase ou palavra: \n";
    cin >> sentence;

    //ask for the position
    int position;
    cout << "Fale a posicao que deseja remover: \n";
    cin >> position;

    //check if the position is not higher then the string length

    if(position >= sentence.length()){
        cout << "Posicao dada eh grande demais! \n";
        return 0;
    }

    //remove the character in the position

    sentence.erase(position, 1);
    cout << sentence;

    return 0;
}