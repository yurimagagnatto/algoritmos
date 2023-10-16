#include <iostream>
#include <string>
using namespace std;

int main()
{
  int fatorial;
  int numero_digitado;

  cout << "Informe um numero para o calculo do fatorial: ";
  cin >> numero_digitado;

  fatorial = 1;

  for (int i = 1; i <= numero_digitado; i++)
  {
    fatorial = fatorial * i;
  }

  cout << "O fatorial é: " << fatorial;

  cout << "\n\n\n";
}