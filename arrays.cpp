#include <iostream>
using namespace std;

int main(){
    string f1cars[2] = {"Ferrari", "McLaren"};
    f1cars[1] = "RedBull";

    cout << f1cars[1] << " \n";

    //looping through an array

    int majors[5] = { 2016, 2017, 2018, 2019, 2020 };
    int x;
    x = sizeof(majors) / sizeof(int); //sizeof returns the size of an array in bytes
    // to convert that, divide the bytes by the sizeof int
    // so you'll get the array's size

    for (int i = 0; i < x; i++){
        cout << majors[i] << " \n";
    }

    // it's possible to omit the array size doing by type name[];, but it's not recomended
    // you can also omit the values and add them later using name[] = x;

    //array of arrays (multidimensional array)

    string majorTeams[2][3] = {
        {"Nip", "Na'Vi", "Virtus Pro"},
        {"Luminosity Gaming", "Sk Gaming", "Astralis"}
    };

    majorTeams[0][0] = "Envy";

    cout << majorTeams[0][0] << " \n";

    //to loop through em, you need one loop for each dimension

    for (int a = 0; a < 2; a++){
        for (int b = 0; b < 3; b++){
            cout << majorTeams[a][b] << " \n";
        }
    }
    return 0;

    //try to build the ship game alone!
}