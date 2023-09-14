#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    float imc, peso, altura;
    
    cout << "Bem-vindo ao SysHealth" << "\n\n";
    cout << "Qual seu peso em kg? ";
    cin >> peso;
    cout << "Qual sua altura em metros? ";
    cin >> altura;
    
    imc = peso / (altura * altura);
    imc = round(imc * 100.0) / 100.0;
    cout << "Seu IMC é de: " << imc << "\n";
    
    if (imc < 18.5) {
        cout << "Você está abaixo do peso";
    } else {
        if (imc >= 18.5 && imc <= 24.9) {
            cout << "Peso normal";
        } else {
            if (imc >= 25 && imc <= 29.9) {
                cout << "Sobrepeso";
            } else {
                if (imc >= 30 && imc <= 34.9) {
                    cout << "Obesidade I";
                } else {
                    if (imc >= 35 && imc <= 39.9) {
                        cout << "Obesidade II";
                    } else {
                        cout << "Obesidade III";
                    }
                }
            }
        }
    }

    return 0;
}