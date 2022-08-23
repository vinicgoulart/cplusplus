/* Write a program in C++ to find Size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes */

#include <iostream>
using namespace std;

int main(){
    cout << "Char is: " << sizeof(char) << " bytes!" << " \n";
    cout << "Short is: " << sizeof(short) << " bytes! \n";
    cout << "Int is: " << sizeof(int) << " bytes! \n";
    cout << "Long is: " << sizeof(long) << " bytes! \n";
    cout << "Long long is: " << sizeof(long long) << " bytes! \n";
    cout << "Float is: " << sizeof(float) << " bytes! \n";
    cout << "double is: " << sizeof(double) << " bytes! \n";
    cout << "Long Double is: " << sizeof(long double) << " bytes! \n";
    cout << "Bool is: " << sizeof(bool) << " bytes! \n";
}
