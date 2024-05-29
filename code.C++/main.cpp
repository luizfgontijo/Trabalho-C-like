#include <iostream>
using namespace std;

int calcular(int a, int b, int x) {
    int r;
    switch (x) {
        case 1:
            r = a + b;
            break;
        case 2:
            r = a - b;
            break;
        case 3:
            r = a * b;
            break;
        case 4:
            r = a / b;  
            break;
    }
    return r;
}

int main() {
    int a, b, x, resultado;

    cout << "Insira o primeiro numero: ";
    cin >> a;

    cout << "Insira o segundo numero: ";
    cin >> b;

    cout << "Qual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao: ";
    cin >> x;

    resultado = calcular(a, b, x);

    if (resultado != -1) {
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}
