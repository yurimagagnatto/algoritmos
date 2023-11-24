#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
  // Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

  int tamanho = 10;
  char letras[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    cout << "Informe a letra " << i + 1 << " ";
    cin >> letras[i];
  }

  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
  // a, f, r, q, o, p, t, s, q, u

  int quantidade_consoantes = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (letras[i] != 'a' &&
        letras[i] != 'e' &&
        letras[i] != 'i' &&
        letras[i] != 'o' &&
        letras[i] != 'u')
    {
      quantidade_consoantes = quantidade_consoantes + 1;
      cout << letras[i] << "-> consoante \n\n";
    }
  }

  cout << "quantidade de consoantes: " << quantidade_consoantes;

  cout << "\n\n\n";
}