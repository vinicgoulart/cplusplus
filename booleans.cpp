// https://www.w3schools.com/cpp/cpp_booleans.asp -> 11/08
#include <iostream>
using namespace std;

int main(){
    bool isWalking = true; //this is equal to 1
    bool isTalking = false; //this is 0

    cout << isWalking << " \n"; //print 1
    cout << isTalking << " \n"; //print 0

    //Boolean Expression

    int x;
    double pi = 3.141516;
    cout << "Digite o valor de x: \n";
    cin >> x;


    cout << (x > pi); //might return 1 (true) or 0 (false)
}