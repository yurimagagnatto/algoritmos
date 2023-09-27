# Estrutura de seleção em C++

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

## Referências

- LOPES, A.; GARCIA, G. Introdução à programação: 500 algoritmos resolvidos. [s.l.] Campus, 2002.

- [Estrutura de seleção – Wikipédia, a enciclopédia livre](https://pt.wikipedia.org/wiki/Estrutura_de_sele%C3%A7%C3%A3o)
