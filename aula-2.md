# Estrutura de seleção em C++

[VOLTAR](/readme.md)

## Estruturas de seleção (ou estrutura condicional de decisão, ou expressão condicional)

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

## IF, ELSE IF e ELSE

Em C++, "if," "else if," e "else" são usados para criar estruturas condicionais que permitem que um programa execute diferentes blocos de código com base em condições específicas. Aqui está uma explicação mais detalhada de como essas construções funcionam em C++:

### IF

A instrução "if" é usada para iniciar um bloco condicional. Ela avalia uma expressão booleana (uma expressão que resulta em verdadeiro ou falso). Se a expressão for verdadeira, o bloco de código associado ao "if" é executado. Se a expressão for falsa, o bloco "if" é ignorado, e a execução continua com a próxima instrução fora do bloco "if".

```cpp
if (condicao) {
    // Bloco de código a ser executado se a condição for verdadeira
}
```

Exemplo:

```cpp
int idade = 20;
if (idade >= 18) {
    cout << "Você é maior de idade.";
}
```

### ELSE IF

A instrução "else if" é usada para verificar uma condição adicional se a condição associada ao "if" for falsa. Você pode ter várias "else if" para lidar com várias alternativas condicionais. O primeiro "else if" cuja condição for verdadeira terá seu bloco de código executado. Se nenhuma condição de "else if" for verdadeira, a execução passará para o bloco "else" ou continuará após a estrutura condicional, se não houver "else".

```cpp
if (condicao1) {
    // Bloco de código a ser executado se a condição1 for verdadeira
} else if (condicao2) {
    // Bloco de código a ser executado se a condição2 for verdadeira
}
```

Exemplo:

```cpp
int idade = 20;
if (idade < 18) {
    cout << "Você é menor de idade.";
} else if (idade == 18) {
    cout << "Você tem 18 anos." << endl;
} else {
    cout << "Você é maior de idade.";
}
```

### ELSE

A instrução "else" é usada como um último recurso em uma estrutura condicional. Ela não tem uma condição associada. O bloco de código "else" é executado quando nenhuma das condições de "if" ou "else if" anteriores é verdadeira. Você pode ter apenas um bloco "else" em uma estrutura condicional.

```cpp
if (condicao1) {
    // Bloco de código a ser executado se a condição1 for verdadeira
} else if (condicao2) {
    // Bloco de código a ser executado se a condição2 for verdadeira
} else {
    // Bloco de código a ser executado se nenhuma das condições anteriores for verdadeira
}
```

Exemplo:

```cpp
int saldo = -100;
if (saldo < 0) {
    cout << "Sua conta está no negativo.";
} else {
    cout << "Sua conta está em saldo positivo ou zerada.";
}
```

Em resumo, em C++, "if" é usado para iniciar uma condição, "else if" é usado para lidar com várias condições alternativas, e "else" é usado como um bloco de código a ser executado quando nenhuma das condições anteriores for verdadeira. Essas construções condicionais são fundamentais para a tomada de decisões em programação em C++.

## Referências

- LOPES, A.; GARCIA, G. Introdução à programação: 500 algoritmos resolvidos. [s.l.] Campus, 2002.

- [Estrutura de seleção – Wikipédia, a enciclopédia livre](https://pt.wikipedia.org/wiki/Estrutura_de_sele%C3%A7%C3%A3o)
