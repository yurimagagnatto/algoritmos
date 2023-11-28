# Vetor (Array) em C++

[VOLTAR](/readme.md)

Em C++, um vetor, também conhecido como array, é uma estrutura que permite armazenar elementos do mesmo tipo em uma sequência ordenada. Os elementos são acessados por meio de índices, e é importante observar que os índices começam a contar a partir de zero.

## Primeiro Índice

O primeiro elemento de um vetor tem o índice 0. Isso significa que, ao acessar um vetor, o índice mais baixo é sempre 0, representando o início da sequência de elementos.

## Último Índice

Para encontrar o índice da última posição de um vetor, subtrai-se 1 do tamanho total do vetor. Por exemplo, em um vetor com tamanho 5, os índices variam de 0 a 4. O último índice seria, portanto, 5 - 1 = 4.

## Exemplos

### Exemplo de Declaração de Vetor

```cpp
// Declaração de um vetor de inteiros com tamanho 5
int numeros[5];
```

### Exemplo de Inicialização de Vetor (já declarando os valores)

```cpp
// Inicialização de um vetor de inteiros com valores específicos
int numeros[5] = {1, 2, 3, 4, 5};
```

### Declarando valores individualmente

```cpp
// Inicialização de um vetor
int numeros[5];

// Adicionando valores individualmente ao vetor
numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;
numeros[3] = 40;
numeros[4] = 50;
```

### Input de Dados em um Vetor

```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho = 3;
    int vetor[tamanho];

    // Input de dados para o vetor
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> vetor[i];
    }
}
```

### Varredura de um Vetor (Array)

```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho = 5;
    int vetor[tamanho] = {10, 20, 30, 40, 50};

    // Varredura e exibição dos elementos do vetor
    cout << "Elementos do vetor: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
}
```

Esses são conceitos básicos relacionados a vetores em C++. Eles são frequentemente utilizados para armazenar coleções de dados de maneira eficiente, e o acesso a elementos individuais é feito através de índices. O exemplo fornece uma visão geral das declarações, inicialização, entrada de dados e varredura de um vetor em C++.
