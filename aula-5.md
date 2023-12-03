# Função em C++

[VOLTAR](/readme.md)

Uma função em C++ é um bloco de código que realiza uma tarefa específica. Essa tarefa pode ser desde uma operação simples até um conjunto complexo de operações. Funções facilitam a modularização do código, tornando-o mais organizado, reutilizável e fácil de manter.

## Função main()

Em C++, a função main é o ponto de entrada principal para a execução de um programa. Quando um programa em C++ é executado, o sistema operacional inicia a execução a partir da função main. Essa função é obrigatória e deve ser definida em todos os programas C++.

A assinatura típica da função main em C++ é:

```cpp
int main() {
    // Código do programa
    return 0; // Indica que o programa foi concluído com sucesso
}
```

## Declaração de Função

É especificado o nome da função, o tipo de retorno (se houver), os parâmetros (se houver), e o bloco de código entre chaves que define o que a função faz.

```cpp
// Declaração de uma função simples que não recebe parâmetros e não retorna valor
void saudacao() {
    cout << "Olá, seja bem-vindo!";
}
```

## Utilização de Função

A função é chamada no programa principal usando seu nome, e seus parâmetros (se houver). A execução do programa segue para a função correspondente.

```cpp
int main() {
    // Chamada da função saudacao dentro da main
    saudacao();
}
```

## Função com Parâmetros

As funções podem receber zero ou mais parâmetros. Os parâmetros são variáveis que armazenam valores passados para a função quando ela é chamada.

```cpp
// Função que recebe dois inteiros como parâmetros e exibe a soma na tela
void soma(int a, int b) {
    int soma;
    soma = a + b;
    cout << soma;
}

// Executando a função soma passando os 2 parâmetros que ela recebe
soma(15,35);
```

## Função com Retorno

Algumas funções retornam um valor para o ponto onde foram chamadas. O tipo de retorno é especificado na declaração da função, e a instrução `return` é usada para retornar o valor. Se uma função não precisa retornar um valor, seu tipo de retorno é definido como `void`.

```cpp
int soma(int a, int b) {
    int soma;
    soma = a + b;
    return soma;
}

// Executando a função soma e recebendo o retorno em uma variável do mesmo tipo
int resultado = soma(10,20);
cout << resultado;
```

## Tipos de Dados em Funções

Os tipos de dados dos parâmetros e do retorno podem ser diferentes, dependendo da tarefa que a função realiza.

```cpp
// Função que recebe 2 floats como parâmetros e retorna a multiplicação, definida como double.
double multiplicacao(float a, int b) {
    return a * b;
}
```
