#include <iostream>
using namespace std;

void saudacao()
{
  cout << "Olá, seja bem-vindo! Por favor, digite um numero para calcular a tabuada:\n\n";
}

int multiplicacao(int a, int b)
{
  return a * b;
}

int tabuada(int n)
{
  for (int i = 1; i <= 10; i++)
  {
    int resultado = multiplicacao(n, i); // executa a função 'multiplicacao'
    cout << n << " x " << i << " = " << resultado << "\n";
  }
}

// nosso programa começa aqui, na função main
int main()
{
  saudacao(); // executa a função 'saudacao'

  int numero;
  cin >> numero;

  tabuada(numero); // executa a função 'multiplicacao'

  return 0;
}