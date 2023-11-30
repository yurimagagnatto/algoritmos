#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
  // Faça um Programa que leia 10 números inteiros e armazene-os num vetor. Armazene os números pares em um segundo vetor "PARES" e os números ímpares em um terceiro vetor "IMPARES". Imprima os três vetores.

  int numeros[10];

  int quantidade_pares = 0;
  int quantidade_impares = 0;

  // ler os 10 números fornecidos pelo usuário
  for (int i = 0; i < 10; i++)
  {
    cout << "informe um numero: ";
    cin >> numeros[i];

    if (numeros[i] % 2 == 0)
    {
      // par
      quantidade_pares = quantidade_pares + 1;
    }
    else
    {
      // ímpar
      quantidade_impares = quantidade_impares + 1;
    }
  }

  int pares[quantidade_pares];
  int impares[quantidade_impares];

  int indice_pares = 0;
  int indice_impares = 0;

  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] % 2 == 0)
    {
      // par
      pares[indice_pares] = numeros[i];
      indice_pares = indice_pares + 1;
    }
    else
    {
      // ímpar
      impares[indice_impares] = numeros[i];
      indice_impares = indice_impares + 1;
    }
  }

  // imprime os pares
  cout << "PARES:\n";
  for (int i = 0; i < quantidade_pares; i++)
  {
    cout << pares[i] << "\n";
  }

  // imprime os impares
  cout << "IMPARES:\n";
  for (int i = 0; i < quantidade_impares; i++)
  {
    cout << impares[i] << "\n";
  }

  cout << "\n\n\n";
}