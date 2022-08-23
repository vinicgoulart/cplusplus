#include <iostream>
using namespace std;

int main(){
    int i = 5;

    for (i; i >= 0; i--){ //use this when the number of times it'll repeat is known
        cout << i << " \n";
        
    }

    int x = 0;

    cout << "For com break no meio! \n";

    for (x; x <= 10; x++){
        if(x == 7){
            break; // break also works in here
        }

        if(x == 6){
            continue; // continues to the next value (breaks only one time and jump to the next)
        }

        cout << x << " \n";
    }

    return 0;
}