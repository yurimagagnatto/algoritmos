#include <iostream>
using namespace std;

int main()
{
  int escolha;
  int numero_do_primeiro_jogador;
  int numero_do_segundo_jogador;
  int soma;

  cout << "O que o primeiro jogador escolheu?\n";
  cout << "Digite 0 para par\n";
  cout << "Digite 1 para impar\n";

  cin >> escolha;

  cout << "Informe o numero do primeiro jogador: \n";
  cin >> numero_do_primeiro_jogador;

  cout << "Informe o numero do segundo jogador: \n";
  cin >> numero_do_segundo_jogador;

  soma = numero_do_primeiro_jogador + numero_do_segundo_jogador;

  if (escolha == 0 && soma % 2 == 0)
  {
    cout << "O primeiro jogador ganhou! \n";
  }
  else if (escolha == 0 && soma % 2 == 1)
  {
    cout << "O segundo jogador ganhou! \n";
  }
  else if (escolha == 1 && soma % 2 == 0)
  {
    cout << "O segundo jogador ganhou! \n";
  }
  else if (escolha == 1 && soma % 2 == 1)
  {
    cout << "O primeiro jogador ganhou! \n";
  }

  cout << "\n\n";
}