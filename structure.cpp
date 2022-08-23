#include <iostream>
using namespace std;

int main(){
    struct { //structure basic declaration
    //a structure allows us to put different types of variable into one thing
        int myAge = 17; //everything inside a structure is a member
        string firstName = "Vinicius";
        char firstNameLetter = 'V';
    } myStructure; //structure's 'name'

    //to access any of the structure members

    myStructure.firstName = "Aaaaa";

    cout << "Meu nome eh: " << myStructure.firstName << " \n";

    //it's possible to use a single structure to many different variables

    struct {
        string team;
        string bestPlayer;
        bool bestTeam = true;
        int year;
    } major2016_1, major2016_2;

    major2016_1.bestPlayer = "coldzera";
    major2016_2.bestPlayer = "fer";

    cout << "No major de 2016, o mvp foi: " << major2016_1.bestPlayer << " no segundo foi: " << major2016_2.bestPlayer << " \n";

    //we can create named structures that will act as models to other variables

    struct car{
        int year;
        string name;
        string brand;
        bool isPopular;
    };

    car Porsche;
    Porsche.brand = "idk";
    Porsche.name = "Porsche";
    Porsche.year = 2019;
    Porsche.isPopular = true;

    car Ferrari;
    Ferrari.brand = "Ferrari";
    Ferrari.name = "Ferrari pica";
    Ferrari.year = 2020;
    Ferrari.isPopular = true;

    cout << Ferrari.brand << ", " << Ferrari.name << ", " << Ferrari.year << " \n";
    cout << Porsche.brand << ", " << Porsche.name << ", " << Porsche.year << " \n";
}