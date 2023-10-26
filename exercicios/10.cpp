#include <iostream>
#include <string>
using namespace std;

// Faça um programa que leia 5 números e informe o maior número.

int main()
{
  int numero;
  int maior_numero = 0;

  for (int i = 1; i <= 5; i++)
  {

    cout << "Digite um numero positivo: ";
    cin >> numero;

    if (numero > maior_numero)
    {
      maior_numero = numero;
    }
  }

  cout << "\n"
       << "O maior numero e: " << maior_numero;

  cout << "\n\n\n";
}