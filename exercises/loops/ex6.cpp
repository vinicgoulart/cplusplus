/*Program that shows how many numbers that you can divide by 2 in a range */

#include <iostream>
using namespace std;

int main(){
    //receive range
    int range;
    cout << "Digite o tamanho do for: \n";
    cin >> range;
    
    //storage variable
    int storage = 0;

    //do a simple for that starts in 1
    for (int i = 1; i <= range; i++){
        if(i % 2 == 0){
            storage++;
        }
    }

    cout << storage;
}