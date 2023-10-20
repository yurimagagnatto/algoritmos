#include <iostream>
using namespace std;

// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

int main()
{
  int nota;

  while (true)
  {
    cout << "Informe uma nota: ";
    cin >> nota;

    if (nota >= 0 && nota <= 10)
    {
      // correto
      cout << "Nota valida!\n";
      break;
    }
    else
    {
      cout << "Nota invalida!\n";
    }
  }

  cout << "\n\n\n";
}