#include <iostream>
using namespace std;

int main(){
    // arithmetic ones:

    int x = 100 + 50; // gonna return 150; can be used with variables
    cout << x << " \n";

    /* other types: - subtraction; * Multiplication; / Division by;
    % modulus (returns the division remainder)
    ++ increases the variable number + 1 (++x)
    -- decreases the variable number -1 (--x)
    */

   //Assignment Operators (assing values to variables)
    int y = 10;

    /* other types: +=, -= ... */

    //Comparision operators (compare and returns a boolean)
    int five = 5;
    int three = 3;

    cout << (five > three) << " \n"; //true (1)

    /* other types: == equal to; != not equal; < less than
    >= greater or equal to; <= less or equal to.
    */

   //Logical operators (determine the logic between variables)

    cout << (five < 10 && three > 2); //true (both satisfies the conditions)

    /* other types: || or; !logical not (returns the opposite) */

    return 0;
}