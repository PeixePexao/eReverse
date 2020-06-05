#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    cout << "Bem vindo ao eReverse!" << endl;
    unsigned int vezes;
    cout << "Quantas vezes aumentaremos x em (1 - 1/x)^x?";
    cin >> vezes;
    if (cin.fail()) {
        cout << "Valor inválido!";
        return 0;
    }
    for (int i = 1; i < vezes + 1; i++) {
        double primeiraparte = 1.0 - 1.0/i;
        double segundaparte = pow(primeiraparte, i);
        cout << segundaparte << endl;

    }

}