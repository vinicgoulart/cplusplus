#include <iostream>
using namespace std;

int main(){
    int bestMajors = 2016;
    int &brazilianMajors = bestMajors; //this variable will be the same as bestMajors

    brazilianMajors = 2010; //if I put a new value to this, it will be assigned to bestMajors
    cout << bestMajors << " \n";

    string fuck = "fuck you";
    cout << &fuck; //& is basically the value where the variable is stored.

    //it is important to know the memory address because we can reuse code and improve performance
    //with the & operator
}