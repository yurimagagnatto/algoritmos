#include <iostream>
using namespace std;

int main()
{
  // entrada
  // 1 - informação do primeiro jogador (par)
  // 2 - jogador 1 escolheu 3
  // 3 - jogador 2 escolheu 1

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

  if (escolha == 0)
  {
    cout << "O primeiro jogador escolheu par\n";

    if (soma % 2 == 0)
    {
      cout << "O primeiro jogador ganhou!\n";
    }
    else
    {
      cout << "O segundo jogador ganhou!\n";
    }
  }
  else if (escolha == 1)
  {
    cout << "O primeiro jogador escolheu ímpar\n";

    if (soma % 2 == 1)
    {
      cout << "O primeiro jogador ganhou\n";
    }
    else
    {
      cout << "O segundo jogador ganhou\n";
    }
  }
  else
  {
    cout << "Opção inválida\n";
  }

  // saída -> quem ganhou

  cout << "\n\n\n\n\n\n";
}