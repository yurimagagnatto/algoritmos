# PROVA 1

[VOLTAR](/readme.md)

## Exercício 1 (3.0)

```cpp
#include <iostream>
using namespace std;

int main() {
    // Leitura dos lados do triângulo
    int lado1, lado2, lado3;
    cout << "Digite os três lados do triângulo: ";
    cin >> lado1 >> lado2 >> lado3;

    // Verificação do tipo de triângulo
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triângulo é equilátero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "O triângulo é isósceles." << endl;
    } else {
        cout << "O triângulo é escaleno." << endl;
    }

    return 0;
}
```

## Exercício 2 (3.5)

```cpp
#include <iostream>
using namespace std;

int main() {
    // Leitura do ano
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    // Verificação se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano é bissexto." << endl;
    } else {
        cout << "O ano não é bissexto." << endl;
    }

    return 0;
}
```

## Exercício 3 (3.5)

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Geração do número aleatório entre 1 e 100
    srand(time(0));
    int numero_sorteado = (rand() % 100) + 1;

    // Adivinhação do número pelo usuário
    int tentativa, tentativas = 0;
    while (tentativa != numero_sorteado) {
        cout << "Digite um número entre 1 e 100: ";
        cin >> tentativa;

        // Verificação se o número está correto
        if (tentativa == numero_sorteado) {
            cout << "Parabéns! Você acertou em " << tentativas + 1 << " tentativas." << endl;
        } else {
            cout << "Número incorreto. ";
            if (tentativa < numero_sorteado) {
                cout << "O número sorteado é maior." << endl;
            } else {
                cout << "O número sorteado é menor." << endl;
            }
            tentativas++;
        }
    }

    return 0;
}
```
