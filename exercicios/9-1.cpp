#include <iostream>
using namespace std;

int main()
{
  int numero_informado;

  cout << "Digite um numero inteiro: ";
  cin >> numero_informado;

  cout << "Numeros pares: \n";

  for (int i = 0; i <= numero_informado; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << " ";
    }
  }

  cout << "\n\n\n";
}