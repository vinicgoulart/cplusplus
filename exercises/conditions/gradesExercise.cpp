//a school must approve students that have grades greater or equal than 6
//if a student has 5, he must be in 5 extra classes to be approved
//if the student's grade is less than 5, he has no other solution
//analyse 3 grades of a student and return its situation

// 4 variables => g1, g2, g3, media
// get the values from the user (g1, g2, g3)
// do the math to calculate the media
// do the cases if the student is or not approved
// print the result to the user

#include <iostream>
using namespace std;

int main(){
    double grade1, grade2, grade3, media;

    cout << "Por favor digite o valor das notas do aluno! \n";

    cout << "Nota 1: \n";
    cin >> grade1;

    cout << "Nota 2: \n";
    cin >> grade2;

    cout << "Nota 3: \n";
    cin >> grade3;

    media = (grade1 + grade2 + grade3) / 3;

    if(media >= 6){
        cout << "Aluno aprovado! Media de: " << media << " \n";
        return 0;
    }else if(media > 4 && media < 6) {
        cout << "Aluno em aulas extras! Media de: " << media << " \n";
        return 0;
    }else{
        cout << "Aluno reprovado! Media de: " << media << " \n";
        return 0;
    } 
}