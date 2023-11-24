#include <iostream>
#include <string>
#include <locale>
using namespace std;

/*

Crie um programa que leia 5 números do usuário. Em seguida, exiba os números na ordem inversa.

*/

int main()
{
  // quantidade de números que iremos armazenar
  int quantidade_de_numeros = 5;

  // definimos um Vetor (Array) com 5 posições
  // (quantidade definida anteriormente)
  int numeros[quantidade_de_numeros];

  // laço para perguntar os números pro usuário
  for (int i = 1; i <= quantidade_de_numeros; i++)
  {
    cout << "Informe o " << i << "º número: ";
    cin >> numeros[i - 1];
  }

  cout << "\n";

  // laço para imprimir os números
  for (int i = 1; i <= quantidade_de_numeros; i++)
  {
    cout << numeros[quantidade_de_numeros - i] << "\n";
  }

  cout << "\n\n";
}