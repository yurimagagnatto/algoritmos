# Estruturas de repetição

[VOLTAR](/readme.md)

Em C++, as estruturas de repetição (ou loops) são usadas para executar um bloco de código repetidamente enquanto uma condição específica for atendida. As duas estruturas de repetição mais comuns em C++ são "for" e "while".

## Estrutura de Repetição "FOR":

A estrutura de repetição "for" é frequentemente usada quando você sabe de antemão quantas vezes deseja repetir um bloco de código. A sintaxe básica do "for" em C++ é a seguinte:

```cpp
for (inicialização; condição; atualização) {
    // Bloco de código a ser repetido
}
```

- `inicialização`: Aqui, você pode criar uma variável de controle do loop, que geralmente age como um contador.
- `condição`: É uma expressão que é verificada antes de cada repetição. Enquanto a condição for verdadeira, o loop continuará a ser executado. Quando a condição se torna falsa, o loop é encerrado.
- `atualização`: Normalmente, esta parte é usada para atualizar a variável de controle do loop, como incrementá-la ou decrementá-la.

Exemplo de um loop "for" em C++:

```cpp
for (int i = 0; i < 5; i++) {
    cout << "Repetição " << i << endl;
}
```

Nesse exemplo, o loop "for" será executado 5 vezes, pois a variável `i` começa em 0 e é incrementada a cada repetição até que `i` seja igual a 4 (menor que 5).

## Estrutura de Repetição "while" em C++:

A estrutura de repetição "while" é usada quando você não sabe antecipadamente quantas vezes deseja repetir um bloco de código e o loop deve continuar enquanto uma condição específica for verdadeira. A sintaxe básica do "while" em C++ é a seguinte:

```cpp
while (condição) {
    // Bloco de código a ser repetido
}
```

- `condição`: É uma expressão que é verificada antes de cada repetição. Enquanto a condição for verdadeira, o loop continuará a ser executado. Quando a condição se torna falsa, o loop é encerrado.

Exemplo de um loop "while" em C++:

```cpp
int contador = 0;
while (contador < 5) {
    cout << "Repetição " << contador << endl;
    contador++;
}
```

Neste exemplo, o bloco de código dentro do loop "while" será executado enquanto a variável `contador` for menor que 5. A cada repetição, o valor de `contador` é incrementado, e o loop continua até que `contador` seja igual a 5.

Resumindo, a estrutura de repetição "for" é usada quando o número de repetições é conhecido de antemão, enquanto a estrutura de repetição "while" é usada quando o número de repetições não é conhecido antecipadamente e o loop deve continuar enquanto uma condição específica for verdadeira. Ambas as estruturas são essenciais para controlar a repetição de blocos de código em C++.