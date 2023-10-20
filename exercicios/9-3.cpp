#include <iostream>
using namespace std;

// Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.

int main()
{
  int nota;

  cout << "Informe uma nota: ";
  cin >> nota;

  while (nota > 10 || nota < 0)
  {

    cout << "Numero invalido. Informe uma nova nota: ";
    cin >> nota;
  }

  cout << "Numero valido";

  cout << "\n\n\n";
}