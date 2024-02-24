#include <iostream>

using namespace std;

int main() {
    int calificacion;

    cout <<"___________________________________________________"<< endl;
    cout << "Ingrese la calificacion del estudiante (0-100): "<< endl;
    cin >> calificacion;


    char letra_calificacion;
    if (calificacion >= 90 && calificacion <= 100) {
        letra_calificacion = 'A';
    } else if (calificacion >= 80 && calificacion <= 89) {
        letra_calificacion = 'B';
    } else if (calificacion >= 70 && calificacion <= 79) {
        letra_calificacion = 'C';
    } else if (calificacion >= 60 && calificacion <= 69) {
        letra_calificacion = 'D';
    } else if (calificacion >= 0 && calificacion <= 59) {
        letra_calificacion = 'F';
    } else {
        cout <<"___________________________________________________"<< endl;
        cout << "La calificacion ingresada no es valida.\n";
        cout <<"___________________________________________________"<< endl;
        return 1;
    }
    cout <<"___________________________________________________"<< endl;
    cout << "La calificacion correspondiente es: " << letra_calificacion << endl;
    cout <<"___________________________________________________"<< endl;
    return 0;
}
