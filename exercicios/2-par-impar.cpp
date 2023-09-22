#include <iostream>
using namespace std;

int main()
{
  int numero, resto;

  cout << "Informe um número inteiro: ";
  cin >> numero;

  resto = numero % 2;

  if (resto == 0)
  {
    cout << "O número " << numero << " é par."
         << "\n";
  }
  else
  {
    cout << "O número " << numero << " é ímpar."
         << "\n";
  }
}