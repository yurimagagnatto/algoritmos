#include <iostream>
using namespace std;

// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

int main()
{
  bool x;
  x = true;

  while (x)
  {
    int nota;
    cout << "Informe uma nota: ";
    cin >> nota;

    if (nota >= 0 && nota <= 10)
    {
      // número válido
      x = false;
      cout << "Numero valido!";
    }
    else
    {
      cout << "Numero invalido!";
    }
  }

  cout << "\n\n\n";
}