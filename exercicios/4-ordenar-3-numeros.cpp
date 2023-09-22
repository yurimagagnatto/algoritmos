#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3;
  int x;

  cout << "Informe o primeiro número: ";
  cin >> n1;

  cout << "Informe o segundo número: ";
  cin >> n2;

  cout << "Informe o terceiro número: ";
  cin >> n3;

  // se o primeiro número for maior que o segundo
  if (n1 > n2)
  {
    // inverte o primeiro número com o segundo
    x = n1;
    n1 = n2;
    n2 = x;
  }

  // se o segundo número for maior que o terceiro
  if (n2 > n3)
  {
    // inverte o segundo número com o terceiro
    x = n2;
    n2 = n3;
    n3 = x;
  }

  // se o primeiro número for maior que o segundo
  if (n1 > n2)
  {
    // inverte o primeiro número com o segundo novamente
    x = n1;
    n1 = n2;
    n2 = x;
  }

  cout << "Número menor: " << n1 << "\n";
  cout << "Número do meio: " << n2 << "\n";
  cout << "Número maior: " << n3 << "\n";
}