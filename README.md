# Algoritmos

- Lógica de programação e a tecnica de encadear pensamentos para
atingir determinado objetivo.

- Aprender essa habilidade é fundamental para quem quer trabalhar com desenvolvimento de sistemas e programas.

- Algoritmo é uma seqüência de passos finitos com o objetivo de so-
lucionar um problema.

- É como ensinar uma máquina a realizar uma tarefa específica.

## C++

C++ é uma linguagem de programação compilada que suporta múltiplos estilos de programação, incluindo imperativo, orientado a objetos e genérico. É amplamente utilizada tanto na indústria quanto na academia desde os anos 1990, devido ao seu alto desempenho e grande base de usuários. É uma linguagem de uso geral muito popular.

### Estrutura de um código em C++

```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

  // Início do código

  cout << "Olá Mundo!"; // Imprime "Olá Mundo!"

  // Fim do código

}
```

- **#include** — Serve para importar bibliotecas.
- **\<iostream\>** — Biblioteca com recursos de entrada e saída.
- **\<string\>** — Biblioteca necessária para usar strings.
- **\<cmath\>** — Biblioteca necessária para usar algumas funções matemáticas.
- **using namespace std** — Serve para usar os recursos de entrada e saída da biblioteca iostream (importada anteriormente).
- Todo programa em C++ deve incluir uma função **main**. Se você tentar compilar um programa em C++ sem a função main, o compilador irá gerar um erro.

## DEV C++

**Dev-C++** é um ambiente de desenvolvimento integrado (IDE) C e C++ completo para plataformas Windows.

## Variável

- Uma variável é um espaço na memória que guarda informações.

- Podemos atribuir um nome a esse espaço para facilitar a programação.

- O conteúdo de uma variável pode ser de diversos tipos, como números inteiros, números reais, caracteres e valores lógicos.

- Uma vez que definimos o nome e o tipo de uma variável, não podemos modificá-los ao longo do algoritmo.

- O conteúdo da variável pode ser constantemente alterado.

### Numérica

Variáveis numéricas armazenam dados numéricos. Vamos trabalhar com dois tipos por enquanto:

#### int

Números inteiros são valores sem partes decimais ou frações, podendo ser positivos ou negativos.

```cpp
int numero_inteiro;
```

#### float

Os números reais são aqueles que podem possuir componentes decimais
ou fracionários, podendo também ser positivos ou negativos.

```cpp
float numero_real;
```

### string

Também conhecida como caractere, alfanumérica ou literal. Esse tipo de
variável armazena dados que contêm letras, dígitos e/ou símbolos especiais.

```cpp
string texto;
```

### bool

No contexto do algoritmo, são usados apenas dois valores lógicos: verdadeiro (true) ou falso (false).

```cpp
bool x;
```

## Expressões

### Aritméticas

O resultado da avaliação pode ser numérico, seja inteiro (int) ou real (float). Apenas é permitido o uso de operadores aritméticos e variáveis numéricas.

#### Soma

```cpp
1 + 1
```

#### Subtração

```cpp
5 - 4
```

#### Multiplicação

```cpp
2 * 3
```

#### Divisão

```cpp
10 / 2
```

#### Exponenciação

```cpp
pow(2,10)
```

#### Resto

Resto da divisão de dois números inteiros.

```cpp
3 % 2
```

### Relacional

Uma expressão relacional, ou relação, é uma comparação feita entre dois valores do mesmo tipo básico. Esses valores são representados na relação por meio de constantes, variáveis ou expressões aritméticas.

| Operador         | Matemática | C++ |
|------------------|:----------:|:---:|
| Igual            | =          | ==  |
| Diferente        | ≠          | !=  |
| Maior            | >          | >   |
| Menor que        | <          | <   |
| Maior ou Igual a | ≥          | >=  |
| Menor ou Igual a | ≤          | <=  |

### Lógica (booleana)

Uma expressão lógica é aquela em que os operadores são lógicos e os operandos podem ser relações, constantes ou variáveis do tipo lógico.

| Operador  | Matemática | C++   |
|-----------|:----------:|:-----:|
| conjunção | e          | &&    |
| disjunção | ou         | \|\|  |
| negação   | não        | !     |

#### Tabela verdade do operador **&&**

| 1     |        | 2     | Saída     |
|:-----:|:------:|:-----:|:---------:|
| false | **&&** | false | **false** |
| false | **&&** | true  | **false** |
| true  | **&&** | false | **false** |
| true  | **&&** | true  | **true**  |

#### Tabela verdade do operador **||**

| 1     |          | 2     | Saída     |
|:-----:|:--------:|:-----:|:---------:|
| false | **\|\|** | false | **false** |
| false | **\|\|** | true  | **true**  |
| true  | **\|\|** | false | **true**  |
| true  | **\|\|** | true  | **true**  |

#### Tabela verdade do operador **!**

O operador **!** (não) inverte a saída.

|         | Saída     |
|:-------:|:---------:|
| ! false | **true**  |
| ! true  | **false** |

O resultado de uma avaliação de uma expressão lógica é sempre um valor lógico, ou seja, falso ou verdadeiro. Por essa razão, podemos considerar uma única relação como uma expressão lógica.

## Funções

O conceito de função em termos computacionais está fortemente relacionado ao conceito de função matemática, onde um conjunto de variáveis e constantes numéricas se relaciona por meio de operadores, formando uma fórmula que, quando avaliada, produz um valor.

### pow()

Função que retorna a base elevada ao expoente de potência.

```cpp
pow(10,23)
```

### sqrt()

Função que resulta no valor da raiz quadrada de um número positivo.

```cpp
sqrt(4)
```

### to_string()

Converte um numérico (int ou float) para string.

```cpp
to_string(10)
```

### stoi()

Converte uma string para inteiro (int).

```cpp
stoi("10")
```

### stof()

Converte uma string para decimal (float).

```cpp
stof("2.5")
```

### sizeof()

Retorna um inteiro (int) que representa o tamanho (quantidade de caracteres) de uma string.

```cpp
sizeof("Olá")
```

### round()

Retorna o valor inteiro mais próximo do número informado.

## Atribuição

Esta é a maneira principal de armazenar dados em uma variável. Esse comando permite que você atribua um valor a uma variável, desde que o tipo desse valor seja compatível com a variável.

```cpp
numero_inteiro = 10;
numero_real = 2.5;
texto = "Olá Mundo!";
x = true;
```

## Comando de Saída

Este comando envia informações ou resultados ao usuário. Ele busca o valor de cada variável na memória e o exibe em um dispositivo de saída, permitindo que o computador mostre resultados e mensagens ao usuário na tela do computador.

```cpp
cout << "Olá Mundo!";
```

## Comando de entrada

Este é o comando que permite ao usuário inserir dados, criando uma interação com o computador. Os dados digitados são temporariamente armazenados em um registrador e, posteriormente, copiados para a posição de memória especificada no comando. Lembre-se de que o nome de uma variável representa uma posição de memória.

```cpp
int numero_inteiro;
cin >> numero_inteiro;
```

## Estruturas de seleção (expressão condicional)

É uma estrutura de controle que executa um ou mais comandos se a condição testada for verdadeira e, em alguns casos, executa um ou mais comandos se for falsa.

### Seleção Simples - SE (IF)

```cpp
if (x == 2) { // SE condição for VERDADEIRA

  // Código que é executado se a condição for VERDADEIRA
  
}
```

### Seleção Composta - SE, SENÃO (IF, ELSE)

```cpp
if (x == 2) { // SE condição for VERDADEIRA

  // Código que é executado se a condição for VERDADEIRA

} else { // SENÃO

  // Código que é executado se não cair na condição acima

}
```

### SEs aninhados

```cpp
if (x == 2) { // SE condição for VERDADEIRA

  // SE x for igual a 2

  if (y == 3) {

    // SE x for igual a 2 e y for igual a 3

  } else { // SENÃO

    // SE x for igual a 2 e y não for 3

  }

} else { // SENÃO

  // SE x não for 2

  if (y == 3) { // SE condição for VERDADEIRA

    // SE x não for 2 e y for igual a 3

  } else { // SENÃO

    // SE x não for 2 e y não for 3

  }

}
```

### Alternativa de múltiplas escolhas - SWITCH CASE

É uma alternativa aos blocos de condicionais aninhados, aprimorando a estrutura do algoritmo.

```cpp
int day = 4;
switch (day) {
  case 1:
    cout << "Segunda-feira";
    break;
  case 2:
    cout << "Terça-feira";
    break;
  case 3:
    cout << "Quarta-feira";
    break;
  case 4:
    cout << "Quinta-feira";
    break;
  case 5:
    cout << "Sexta-feira";
    break;
  default:
    cout << "Qualquer dia";
}
```

## Exercícios

1. Faça uma calculadora de IMC (índice de massa corporal).

2. Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o resto da divisão.

3. Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
    - par ou ímpar;
    - positivo ou negativo;
    - inteiro ou decimal.

4. Faça um Programa que leia três números e mostre-os em ordem decrescente.

## Referências

- Lopes, A., Garcia, G. (2002). Introdução à programação: 500 algoritmos resolvidos. Brasil: Campus.
- [Documentação do C++ – introdução, tutoriais, referência. | Microsoft Learn](https://learn.microsoft.com/pt-br/cpp/cpp/)
- [C++ – Wikipédia, a enciclopédia livre](https://pt.wikipedia.org/wiki/C%2B%2B)
- [Online C++ Compiler | Programiz](https://www.programiz.com/cpp-programming/online-compiler/)
- [Dev-C++ Official Website](https://www.bloodshed.net/)
- [ListaDeExercicios - PythonBrasil](https://wiki.python.org.br/ListaDeExercicios)