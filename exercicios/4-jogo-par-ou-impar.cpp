#include <iostream>
using namespace std;

int main()
{
  int escolha_do_primeiro_jogador;

  cout << "O Jogador 1 escolheu par (digite 0) ou ímpar (digite 1): ";
  cin >> escolha_do_primeiro_jogador;
  // "escolha_do_primeiro_jogador" (0 e 1) só representa a escolha que o primeiro jogador fez
  // ATENÇÃO: ainda temos que pegar o número escolhido por cada um!

  // podemos verificar a escolha do jogador com IF:
  if (escolha_do_primeiro_jogador == 0)
  {
    // aqui sabemos que o jogador 1 escolheu par
    cout << "jogador 1 escolheu par";
  }
  else
  {
    // aqui sabemos que o jogador 1 escolheu ímpar
    cout << "jogador 1 escolheu ímpar";
  }

  // OU podemos verificar com SWITCH CASE (o ESCOLHA CASO do visualg):
  switch (escolha_do_primeiro_jogador)
  {
  case 0:
    // aqui sabemos que o jogador 1 escolheu par
    cout << "jogador 1 escolheu par";
    break;
  case 1:
    // aqui sabemos que o jogador 1 escolheu ímpar
    cout << "jogador 1 escolheu ímpar";
    break;
  }

  // no visualg o ESCOLHA CASO é assim:

  // ESCOLHA escolha_do_primeiro_jogador
  //     CASO 0
  //        aqui sabemos que o jogador 1 escolheu par
  //     CASO 1
  //        aqui sabemos que o jogador 1 escolheu ímpar
  // FIMESCOLHA

  // a diferença é que no C++ o SWITCH CASE só pode ser do tipo int
  // e no visualg podia ser CARACTERE

  // AGORA É SÓ CONTINUAR O ALGORITMO, PERGUNTANDO QUAL O NÚMERO O JOGADOR 1 ESCOLHEU
  // E QUAL O NÚMERO QUE O JOGADOR 2 ESCOLHEU
  // E ASSIM DETERMINAR QUEM VENCEU
}