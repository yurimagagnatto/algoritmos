#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
  // Crie um array (vetor) de caracteres que contenha todas as letras do alfabeto. Imprima o vetor.

  int tamanho_alfabeto = 26;
  char alfabeto[tamanho_alfabeto];

  for (int i = 0; i < tamanho_alfabeto; i++)
  {
    alfabeto[i] = static_cast<char>(65 + i);
    // tabela ASCII
    // começa no número 65 (letra "A")
    // e vai até o número 90 (letra "Z")
  }

  for (int i = 0; i < tamanho_alfabeto; i++)
  {
    cout << "Letra: " << alfabeto[i] << " - ASCII: " << 65 + i << "\n";
  }

  cout << "\n\n";
}