#include <iostream>
using namespace std;

int main(){
    char option;
    cout << "Digite c para carro, m para moto, a para avião \n";

    cin >> option;

    switch (tolower(option)){
        case 'c':
            cout << "Carro foi selecionado!";
            break;
        case 'm':
            cout << "Moto foi selecionada!";
            break;
        case 'a':
            cout << "Avião selecionado!";
            break;
        default:
            cout << "Nenhuma opção válida selecionada!";
            break;
    }

    return 0;
}