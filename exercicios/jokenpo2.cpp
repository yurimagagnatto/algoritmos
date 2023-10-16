#include <iostream>
#include <string>
using namespace std;

int main()
{
  string escolha_do_jogador_1;
  string escolha_do_jogador_2;

  cout << "Qual a escolha do primeiro jogador? (digite: pedra, papel ou tesoura)";
  cin >> escolha_do_jogador_1;

  cout << "Qual a escolha do segundo jogador? (digite: pedra, papel ou tesoura)";
  cin >> escolha_do_jogador_2;

  if (
      (escolha_do_jogador_1 == "pedra" ||
       escolha_do_jogador_1 == "papel" ||
       escolha_do_jogador_1 == "tesoura") &&
      (escolha_do_jogador_2 == "pedra" ||
       escolha_do_jogador_2 == "papel" ||
       escolha_do_jogador_2 == "tesoura"))
  {
    cout << "digitou certo!";

    if (
        (escolha_do_jogador_1 == "pedra" && escolha_do_jogador_2 == "tesoura") ||
        (escolha_do_jogador_1 == "tesoura" && escolha_do_jogador_2 == "papel") ||
        (escolha_do_jogador_1 == "papel" && escolha_do_jogador_2 == "pedra"))
    {
      cout << "jogador 1 ganhou!";
    }
    else if (
        (escolha_do_jogador_1 == "pedra" && escolha_do_jogador_2 == "papel") ||
        (escolha_do_jogador_1 == "tesoura" && escolha_do_jogador_2 == "pedra") ||
        (escolha_do_jogador_1 == "papel" && escolha_do_jogador_2 == "tesoura"))
    {
      cout << "jogador 2 ganhou!";
    }
    else
    {
      cout << "empate!";
    }
  }
  else
  {
    cout << "digitou errado!";
  }

  cout << "\n\n\n";
}