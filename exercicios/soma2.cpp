#include <iostream>
#include <string>
using namespace std;

int main()
{
  int soma;
  int valor_digitado;
  int quantidade_de_numeros;

  cout << "Quantos numeros voce quer somar?";
  cin >> quantidade_de_numeros;

  soma = 0;

  for (int i = 1; i <= quantidade_de_numeros; i++)
  {
    cout << "digite o numero " << i << ": ";
    cin >> valor_digitado;

    soma = soma + valor_digitado;
  }

  cout << "a soma e: " << soma;

  cout << "\n\n\n";
}